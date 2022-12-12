#include <iostream>
#include <map>

using namespace std;

int main()
{
    long long n = 0;
    string input;
    map<string, int> inputs;

    cin >> n;
    while (n-- && cin >> input)
    {
        inputs[input]++;
    }

    cout << inputs.size() << endl;
}
