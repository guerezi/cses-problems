#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int result = 1;
    for (int i = 0; i < s.size(); i++)
    {
        int count = 1;
        while (s[i] == s[i + 1])
        {
            i++;
            count++;
        }

        result = max(result, count);
    }

    cout << result << endl;
}
