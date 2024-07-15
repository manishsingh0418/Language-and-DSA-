#include<iostream>
#include<vector>
using namespace std;
void LeadersInArray(vector<int>arr,int n){
for(int i=0;i<n;i++)
{
    bool flag =false;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]<=arr[j])
        {
            flag =true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<arr[i]<<" ";
    }
}
}
int main()
{
 cout << "Enter the value of N ";
    int n;
    cin >> n;
    cout << "Enter " << n << " elements of Array ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    LeadersInArray(arr, n);
    return 0;
}