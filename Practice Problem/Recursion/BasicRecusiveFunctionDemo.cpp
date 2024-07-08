#include<iostream>
using namespace std;
void fun1(){
cout<<"Function 1 \n";
}
void fun2(){
    cout<<"Before Fun 1 \n";
    fun1();
    cout<<"After fun1 \n";
}
int main()
{
    cout<<"Before Function 2 \n";
    fun2();
    cout<<"After Function 2 \n";
}