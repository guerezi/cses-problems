// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

const int n = 7;
int grid[n][n];
int cont = 0;

bool free_pos(int i, int j)
{
    return i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == 0;
}

void search(int s, int i, int j)
{
    if ((i == n - 1) && (j == n - 1))
    {
        if (s == ((n * n) - 1))
        {
            cont++;
        }
        return;
    }

    if (free_pos(i + 1, j))
    {
        // DOWN
        grid[i][j] = 1;
        search(s + 1, i + 1, j);
        grid[i + 1][j] = 0;
    }

    if (free_pos(i - 1, j))
    {
        // UP
        grid[i][j] = 2;
        search(s + 1, i - 1, j);
        grid[i - 1][j] = 0;
    }

    if (free_pos(i, j + 1))
    {
        // RIGHT
        grid[i][j] = 3;
        search(s + 1, i, j + 1);
        grid[i][j + 1] = 0;
    }

    if (free_pos(i, j - 1))
    {
        // LEFT
        grid[i][j] = 4;
        search(s + 1, i, j - 1);
        grid[i][j - 1] = 0;
    }
}

int main()
{
    grid[0][0] = 1;
    search(1, 1, 0);
    cout << (cont * 2) << endl;
    return 0;
}