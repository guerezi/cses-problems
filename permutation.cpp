#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> even, odd;

    for (int i = 1; i <= n; i++)
    {
        if (!(i & 1))
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }

    if (n == 1)
    {
        cout << n << endl;
    }
    else if (even.back() - odd.front() > 1)
    {
        even.insert(even.end(), odd.begin(), odd.end());

        for (int i : even)
            cout << i << ' ';
    }
    else
    {
        cout << "NO SOLUTION" << endl;
    }
}
