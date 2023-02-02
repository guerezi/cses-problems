#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

int total, coins;
vector<int> coin;

int solution(int solve, int i)
{
	cout << solve << " " << i << endl;

	if (coins == 0 || solve > total || i >= coins)
		return 0;
	else if (solve == total)
	{
		cout << "AQUI ";
		return 1;
	}

	return solution(solve + coin[i], i) + solution(solve, i + 1);
}

int main()
{
	int aux = 0;
	cin >> total >> coins;

	for (int i = 0; i < coins; i++)
	{
		cin >> aux;
		coin.push_back(aux);
	}

	int sol = solution(0, 0);

	cout << (sol > 1 ? 'S' : 'N') << " " << sol << endl;
}
