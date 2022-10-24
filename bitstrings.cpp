#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int count = 1;
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        count = count << 1;
        count %= 1000000007;
    }

    cout << count << endl;
}
