#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    while (n != 1)
    {
        cout << n << " ";

        if (!(n & 1))
        {
            n = n >> 1;
        }
        else
        {
            n = (n * 3) + 1;
        }
    }

    cout << n << endl;
}