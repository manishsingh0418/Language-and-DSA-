#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);
    for(int i=0;i< a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<a.at(4);

}