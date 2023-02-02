#include <iostream>
using namespace std;

int main()
{
	string str;

	while (cin >> str)
	{
		int p = 0;

		for (const auto &s : str)
		{
			if (s == '(')
				p++;
			else if (s == ')' && p <= 0)
			{
				p = 1;
				break;
			}
			else if (s == ')')
				p--;
		}

		cout << (p == 0 ? "correct" : "incorrect") << endl;
	}
}
