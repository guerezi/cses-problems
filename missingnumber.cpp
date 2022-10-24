#include <iostream>
#include <list>

using namespace std;

int main()
{
    long long int length, input, sum = 0, i = 0;
    cin >> length;

    while (i < length - 1)
    {
        cin >> input;
        sum += input;
        i++;
    }

    cout << (length * (length + 1)) / 2 - sum << endl;
}
