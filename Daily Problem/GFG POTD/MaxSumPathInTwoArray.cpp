class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        // Code here
        
        int n=arr1.size();
        int m=arr2.size();
        
        int i=0, j=0;
        
        long long s1=0, s2=0, sum=0;
        
        while(i<n && j<m){
            if(arr1[i]==arr2[j]){
                s1+=arr1[i];  // adding 1st arr element 
                s2+=arr2[j];   // adding 2nd arr element
                sum+=max(s1,s2);  // adding maximum sum from arr1, arr2 
                s1=0; s2=0;
                i++; j++;
            }
            else if(arr1[i]<arr2[j]){ s1+=arr1[i]; i++;}
            else if(arr1[i]>arr2[j]){s2+=arr2[j]; j++; }
        }
        
        while(i<n){ s1+=arr1[i]; i++;}
        while(j<m) {s2+=arr2[j]; j++;}
        
        sum+=max(s1,s2);  // ans
        
        return sum;
    }
};