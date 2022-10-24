#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k;
    cin >> k;

    for (int i = 1; i <= k; i++)
    {
        long long int possibilities, knightAttack;
        possibilities = (pow(i, 2) * (pow(i, 2) - 1)) / 2;
        knightAttack = (8 * ((i - 1) * (i - 2))) / 2;

        cout << possibilities - knightAttack << endl;
    }
}
