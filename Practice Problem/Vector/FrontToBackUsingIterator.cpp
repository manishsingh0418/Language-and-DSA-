#include<iostream>
#include<vector>
using namespace std;
void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    //Your code here. Use iterator to print all the elements
    for(it1;it1!=it2;it1++)
    {
        cout<<*it1<<" ";
    }
    cout<<endl;
}
int main ()
{ 
    vector<int> v{1,2,3,4,5};
    vector<int>::iterator it1 = v.begin(); 
    vector<int>::iterator it2 = v.end();
    iter(it1,it2);
    return 0;

}