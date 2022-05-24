#include <bits/stdc++.h>
#define pb push_back
using namespace std;

const int N = 1e4 + 5;
int vis[N];
vector<int> adj[N];
int inc[N];
int cnt2[N];
deque<int> q;
vector<int> tsort;
int n, e, a, b;

int main()
{
    set<int> cnt;

    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        adj[a].pb(b);
        inc[b]++;
    }
    int min = n;
    for (int i = 1; i <= n; ++i)
    {
        cnt.insert(i);
        if (inc[i] == 0)
        {
            if (min > i)
            {
                min = i;
            }
            q.push_back(i);
        }
    }

    if (q.empty()){
        cout << "Sandro fails.";
        return 0;
    }
        
    while (!q.empty())
    {
        int u = q.front();
        q.pop_front();
        tsort.pb(u);
        for (int v : adj[u])
        {
            if (inc[v] > 0 and --inc[v] == 0)
            {

                if (!vis[v])
                {
                    vis[v] = 1;
                    cnt2[v]++;
                    if (v < q.front())
                    {
                        q.push_front(v);
                    }
                    else
                    {
                        q.push_back(v);
                    }
                }
                else
                {
                    cout << "Sandro fails.";
                    return 0;
                }
            }
        }
    }
    for (int i = 0; n > i; i++)
        cout << tsort[i] << " ";
}
