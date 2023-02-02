#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAXCARDS 10001 // 10^4

int main()
{
	while (1)
	{
		int a, b, aux, lastIndexAlice = 0, lastIndexBetty = 0, lastIndex;
		cin >> a >> b;

		if (a == 0 && b == 0)
			break;

		bool alice[MAXCARDS] = {false};
		bool betty[MAXCARDS] = {false};

		for (int i = 0; i < a; i++)
		{
			cin >> aux;
			alice[aux - 1] = true;
			lastIndexAlice = aux;
		}

		for (int i = 0; i < b; i++)
		{
			cin >> aux;
			betty[aux - 1] = true;
			lastIndexBetty = aux;
		}

		a = 0, b = 0, aux = 0;

		lastIndex = lastIndexAlice > lastIndexBetty ? lastIndexAlice : lastIndexBetty;
		lastIndex++;

		for (int i = 0; i < lastIndex; i++)
		{
			if (alice[i])
				a++;
			if (betty[i])
				b++;
		}

		for (int i = 0; i < lastIndex; i++)
		{
			if (a > b)
			{
				if (betty[i] && !alice[i])
					aux++;
			}
			else
			{
				if (alice[i] && !betty[i])
					aux++;
			}
		}

		cout << aux << endl;
	}
}
