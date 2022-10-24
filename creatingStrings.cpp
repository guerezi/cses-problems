#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    map<string, int> dic;
    string text;
    cin >> text;

    sort(text.begin(), text.end());

    do
    {
        dic[text]++;
    } while (next_permutation(text.begin(), text.end()));

    cout << dic.size() << endl;

    for (const auto &elem : dic)
        cout << elem.first << endl;
}
