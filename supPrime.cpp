#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

bool checkZero(vector<ll> arraylist)
{
	for (const auto &elem : arraylist)
		if (elem < 0)
			return false;

	return true;
}

int main()
{
	ll bank_qnt, debenture_qnt;

	while (cin >> bank_qnt >> debenture_qnt)
	{
		if (bank_qnt == 0 && debenture_qnt == 0)
			break;

		vector<ll> bank(bank_qnt + 1);

		for (int i = 1; i <= bank_qnt; cin >> bank[i], i++)
			;

		ll debtor, creditor, value;
		for (int i = 0; i < debenture_qnt; i++)
		{
			cin >> debtor >> creditor >> value;

			bank[debtor] -= value;
			bank[creditor] += value;
		}

		cout << (checkZero(bank) ? 'S' : 'N') << endl;
	}
}
