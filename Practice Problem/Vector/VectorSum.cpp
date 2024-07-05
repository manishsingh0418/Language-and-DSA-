#include<iostream>
#include<vector>
using namespace std;
int SumMe(vector<int> arr, int n){
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    int n=arr.size();
    int a=SumMe(arr,n);
    cout<<a;
}