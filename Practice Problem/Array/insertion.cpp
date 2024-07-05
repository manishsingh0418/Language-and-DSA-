#include<iostream>
using namespace std;
int main()
{   cout<<"We are going to see insertion and uptation operation in a fixed size array"<<endl;
    int a[5]={2,3,4};
    cout<<"Initially value at second index position is "<<a[2]<<endl;
    cout<<"Enter a no to update the value of second index position of array"<<endl;
    cin>>a[2];
    cout<<"Value at Second index position will be "<<a[2]<< "because we have updated the value of the given position"<<endl;
    cout<<"Value at third index position will be "<<a[3]<<" because no value is inserted";
}