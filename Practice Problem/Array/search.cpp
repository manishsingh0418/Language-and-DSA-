#include <iostream>
using namespace std;

int main() {
    int n=5;
    int arr[5];
    cout<<"Enter 5 elemnt for the array " <<endl;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element which you want to search"<<endl;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Element found at position "<<i;
            return 0;
        }
    }
    cout<<"Element not present ";
    return 0;
}
