#include <iostream>
using namespace std;
bool CheckPowerOFTwo(int n)
{
    return(n&&((n&n-1))==0);
}
int main()
{
    int n;
    cin >> n;
    bool a = CheckPowerOFTwo(n);
    if (a == 0)
    {
        cout << "false";
        return 0;
    }
    else
    {
        cout << "true";
    }
    return 0;
}