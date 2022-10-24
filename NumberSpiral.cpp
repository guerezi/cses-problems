#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++)
    {
        long long int result = 0, x, y;
        cin >> x >> y;

        if (x >= y)
        {
            result = x & 1 ? (x - 1) * (x - 1) + y
                           : x * x - y + 1;

            cout
                << result << endl;
        }
        else
        {
            result = y & 1 ? y * y - x + 1
                           : (y - 1) * (y - 1) + x;

            cout << result << endl;
        }
    }
}
