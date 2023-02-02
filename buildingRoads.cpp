#include <iostream>
#include <vector>

using namespace std;

#define MAXN 202020

int n, m;
vector<vector<int>> adj(MAXN);
vector<bool> visited(MAXN, false);
vector<int> bridges;

void checkVisiteds(int i)
{
    visited[i] = true;
    for (auto child : adj[i])
        if (!visited[child])
            checkVisiteds(child);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int node1, node2;
        cin >> node1 >> node2;
        adj[node1].push_back(node2);
        adj[node2].push_back(node1);
    }

    for (int i = 1; i <= n; i++)
        if (!visited[i])
        {
            bridges.push_back(i);
            checkVisiteds(i);
        }

    cout << bridges.size() - 1 << endl;

    for (int i = 0; i < bridges.size() - 1; i++)
    {
        cout << bridges[i] << " " << bridges[i + 1] << endl;
    }
}