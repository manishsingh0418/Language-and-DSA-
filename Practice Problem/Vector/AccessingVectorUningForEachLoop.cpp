#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{10, 15, 30};
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    for (int &x : v)
    {
        x = 6;
    }
    for (int x : v)
    {
        cout << x << " ";
    }
}