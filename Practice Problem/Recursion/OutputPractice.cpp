#include<iostream>
using namespace std;
void fun(int n){
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    fun(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cout<<"Enter N ";
    cin>>n;
    fun(n);

}
