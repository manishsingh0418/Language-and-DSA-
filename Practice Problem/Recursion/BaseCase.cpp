#include<iostream>
using namespace std;
void fun1(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<"Manish \n";
    fun1(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    fun1(n);
}