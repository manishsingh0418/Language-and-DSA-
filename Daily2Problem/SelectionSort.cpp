class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int min= i;
            for(int j=i+1;j<n;j++)
            {
                if(nums[min]>nums[j])
                {
                    swap(nums[min],nums[j]);
                }
            }
            
        }
        return nums;
    }
};