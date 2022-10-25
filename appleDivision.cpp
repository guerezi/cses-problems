#include <iostream>
#include <vector>

using namespace std;
#define lli long long int

lli find(vector<int> arr, lli c, lli t, int i)
{
    if (i == 0)
        return abs((t - c) - c);

    return min(find(arr, c + arr[i], t, i - 1), find(arr, c, t, i - 1));
}

int main()
{
    lli n, apple, total = 0;
    vector<int> apples;

    cin >> n;
    while (n-- && cin >> apple)
    {
        apples.push_back(apple);
        total += apples.back();
    }

    cout << find(apples, 0, total, apples.size() - 1) << endl;
}
