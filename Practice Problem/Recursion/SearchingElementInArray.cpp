#include<iostream>
#include<vector>
using namespace std;

bool recursiveSearch(vector<int>arr, int l,  
                            int r, int x) 
{ 
    if (r < l) 
        return false; 
    if (arr[l] == x) 
        return true; 
    if (arr[r] == x) 
        return true; 

    return recursiveSearch(arr, l + 1,  
                              r - 1, x); 
} 

int main()
{   int n;
    cout<<"Enter N ";
    cin>>n;
    cout<<"Enter elements of array ";
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int x;
    cin>>x;
    int l= arr.front();
    int r=arr.back();
    cout<<recursiveSearch(arr,l,r,x);
    return 0;
}