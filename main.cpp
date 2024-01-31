#include <bits/stdc++.h>

using namespace std;

const int inf = 1e7;

int main()
{
    int n, m;
    cout << "Enter number of Vertex: ";
    cin >> n;
    cout << "\nEnter number of Edges: ";
    cin >> m;

    vector<int> distance(n + 1, inf);

    vector<vector<pair<int, int>>> graph(n + 1);

    cout << "\nEnter all the nodes and weight between two nodes: format(u, v, w)" << endl;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;

        cin >> u >> v >> w;

        graph[u].push_back({v, w});

        graph[v].push_back({u, w});
    }

    int source;
    cout << "\nEnter the source node: ";
    cin >> source;
    distance[source] = 0;

    set<pair<int, int>> s;

    s.insert({0, source});

    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        for (auto it : graph[x.second])
        {
            if (distance[it.first] > distance[x.second] + it.second)
            {
                s.erase({distance[it.first], it.first});
                distance[it.first] = distance[x.second] + it.second;
                s.insert({distance[it.first], it.first});
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (distance[i] < inf)
        {
            cout << "Shortest Distance from node " << source << " to destination node " << i << " : " << distance[i] << endl;
        }
        else
        {
            cout << -1 << " ";
        }
    }
}
