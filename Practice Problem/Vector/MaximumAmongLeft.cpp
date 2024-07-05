#include<iostream>
#include<vector>
using namespace std;
vector<int>MaximumAmongLeft(vector<int>v,int n){
vector<int>res;
    if(v.empty())
    {
        return res;
    }
    int sum=v[0];
    for(int i=0;i<n;i++)
    {
        if(v[i]>sum)
        {
            res.push_back(i);
            sum=v[i];
        }
    }
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" of Vector";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        cout<<endl;
    }
   vector<int>c= MaximumAmongLeft(v,n);
   for(int x:c)
   {
    cout<<x<<" ";
   }

}