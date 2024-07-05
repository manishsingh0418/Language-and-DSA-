#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    vector <int> v(arr,arr+n);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}