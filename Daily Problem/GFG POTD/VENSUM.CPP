int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        int ans=0;
        int curr=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            curr+=arr[i];

//current sum is equal to the target

            if(curr==tar)
            {
                ans++;
            }

//curr sum - target is already present inside map

            if(mp.find(curr-tar)!=mp.end())
            {
                ans +=mp[curr-tar];
            }

//if not there then insert it inside map
            mp[curr]++;
        }

//finally returning the ans
        return ans;
    }  //simple solution