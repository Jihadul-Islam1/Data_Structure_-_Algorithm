//recursion 
#include <bits/stdc++.h>
#include <vector>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];

void dfs(int source)
{

    vis[source] = true;

    cout << source << endl;

    for (int child : v[source])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    int src;
    cin >> src;
    dfs(src);
}
  // 1 -- 2
    // |    |
    // 4 -- 3
    //  \
    //   5
// 5 5          // 5টি নোড এবং 5টি এজ
// 1 2
// 1 4
// 2 3
// 3 4
// 4 5
// 1            // source নোড 1
// ans:
// 1
// 4
// 5
// 3
// 2
