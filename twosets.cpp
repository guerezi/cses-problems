#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n, half, count = 0;
    vector<int> firstSet, secondSet;

    cin >> n;
    half = (n * (n + 1)) / 2;

    if (half & 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        half /= 2;

        for (int i = n; i > 0; i--)
        {
            if ((count + i) <= half)
            {
                count += i;
                firstSet.push_back(i);
            }
            else
            {
                secondSet.push_back(i);
            }
        }

        if (count == half)
        {
            cout << "YES" << endl;

            cout << firstSet.size() << endl;
            for (vector<int>::size_type i = 0; i < firstSet.size(); i++)
                cout << firstSet[i] << " ";

            cout << endl;

            cout << secondSet.size() << endl;
            for (vector<int>::size_type i = 0; i < secondSet.size(); i++)
                cout << secondSet[i] << " ";
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
