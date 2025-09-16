#include <set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>mystack;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            mystack.insert(nums[i]);
        }
        int m = mystack.size();
        if(m<n)
        {
            return true;
        }
        return false;
    }
};