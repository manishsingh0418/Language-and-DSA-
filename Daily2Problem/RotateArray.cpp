//iterative solution 
// class Solution {
// public:
//     void  rotateByOne(vector<int>& nums) {
//         int n= nums.size();
//         int value=nums[n-1];
//         int temp1=nums[0];
//         int temp2;
//         for(int i=0;i<n-1;i++)
//         {
//           temp2=nums[i+1];
//           nums[i+1]=temp1;
//           temp1=temp2;
//         }
//         nums[0]=value;  
//     }
//     void rotate(vector<int>& nums, int k) {
//         for(int i=0;i<k;i++)
//         {
//             rotateByOne(nums);
//         }
//     }
// };

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
         k = k % n;  // Ensure k is within valid range
        
        // If k is zero after modulo, no need to do anything
        if (k == 0) return;
        
     reverse(nums.begin(),nums.end());        
       reverse(nums.begin(),nums.begin()+k);        
          reverse(nums.begin()+k,nums.end());        
    }
};