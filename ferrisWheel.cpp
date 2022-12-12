#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n, x, wheight = 0;
    vector<int> wheights;

    cin >> n >> x;
    while (n-- && cin >> wheight)
    {
        wheights.push_back(wheight);
    }

    sort(wheights.begin(), wheights.end(), greater<long long>());

    cout << wheights.size() << endl;
}
