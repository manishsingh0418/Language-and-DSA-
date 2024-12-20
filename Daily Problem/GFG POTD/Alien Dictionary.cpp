// User function Template for C++

class Solution {
  public:
    string findOrder(string dict[], int n, int k) {
        vector<int>indegree(k);
        vector<vector<int>>adj(k,vector<int>());
        for(int i=0;i<n-1;i++){
            string str1=dict[i];
            string str2=dict[i+1];
            int len=min(str1.size(),str2.size());
            for(int j=0;j<len;j++){
                if(str1[j] !=str2[j]){
                    adj[str1[j]-'a'].push_back(str2[j]-'a');
                    indegree[str2[j]-'a']++;
                    break;
                }
            }
        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0) q.push(i);
        }
        string ans="";
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(char(node+'a'));
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        return ans;
    }
};
