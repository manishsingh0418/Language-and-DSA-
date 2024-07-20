#include<iostream>
using namespace std;
int MajorityElement(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {   int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>(n/2))
        {
            return i;
            break;
        }
    }
    return -1;

}
void solution(int arr[],int n)
{
   int a=MajorityElement(arr,n);
   if(a!=-1)
   {
       cout<<a;
   }
   else 
      cout<<"-1";
}
int main()
{
    int n;
    cout<<"Enter N ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solution(arr,n);
    
}
