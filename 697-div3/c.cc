#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef _DEBUG
    if (freopen("input.txt", "r", stdin) == nullptr)
        return -1;
#endif // _DEBUG
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<pair<int, int>> edges(c);
        for (auto &[x, y] : edges)
            cin >> x;
        for (auto &[x, y] : edges)
            cin >> y;
        vector<int> va(a), vb(b);
        for (auto &[x, y] : edges)
        {
            x--;
            y--;
            va[x]++;
            vb[y]++;
        }
        int64_t ans = 0;
        for (auto &[x, y] : edges)
            ans += c - va[x] - vb[y] + 1;
        cout << ans / 2 << "\n";
    }
    return 0;
}
