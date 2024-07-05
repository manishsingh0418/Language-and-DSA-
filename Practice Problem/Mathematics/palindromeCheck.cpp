#include<iostream>
using namespace std;
void palindrome(int n)
{
 int reverse=0;
 int original=n;
 while(n>0)
 {
    reverse=reverse*10+(n%10);
    n=n/10;
 }
 if (reverse==original){
    cout<<"true";
 }
 else{
    cout<<"false";
 }
}
int main()
{
    int n;
    cin>>n;
    palindrome(n);
    return 0;
}