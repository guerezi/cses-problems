#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int count = 0;
    vector<int> input;
    int length, i = 0;

    cin >> length;

    for (i = 0; i < length; i++)
    {
        int inputedValue;
        cin >> inputedValue;

        input.push_back(inputedValue);
    }

    for (i = 1; i < length; i++)
    {
        if (input[i - 1] > input[i])
        {
            count += input[i - 1] - input[i];
            input[i] = input[i - 1];
        }
    }

    cout << count << endl;
}
