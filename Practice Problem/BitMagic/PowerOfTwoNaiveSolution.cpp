#include <iostream>
using namespace std;
bool CheckPowerOFTwo(int n)
{
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 2 != 0)
        {
            return false;
        }
        n = n / 2;
    }
    return true;
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