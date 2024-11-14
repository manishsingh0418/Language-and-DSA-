class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code

        priority_queue<int,vector<int> , greater<int>>pq; // min heap
        int n = arr.size(); // array size 
        // push (k + 1) elements into min heap
        for(int i = 0 ; i <= k ; i++) {
            pq.push(arr[i]);
        }
        
        int index = 0;
        // pop root of min heap, which will be the smallest element in the window
       // place at 'index'
       // push next element into min heap, so that there are always (k + 1) elements in min heap 
        for(int i = k + 1 ; i < n ; i++) {
            arr[index++] = pq.top();
            pq.pop();
            pq.push(arr[i]);
        }
        // if min heap is NOT empty
       // insert remaining elements
        while(!pq.empty()) {
            arr[index++] = pq.top();
            pq.pop();
        }
    }
};