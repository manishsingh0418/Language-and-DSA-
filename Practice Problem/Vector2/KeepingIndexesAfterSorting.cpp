#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
      v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}