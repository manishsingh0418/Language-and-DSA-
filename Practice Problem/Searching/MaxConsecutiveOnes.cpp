class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                res++;
                count=max(count,res);
            }
            else
            {
                count=max(count,res);
                res=0;            
            }
        }
        return count;
    }
};