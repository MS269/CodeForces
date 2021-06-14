#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &e : v)
    {
        cin >> e;
    }
    int max_pos = max_element(v.begin(), v.end()) - v.begin();
    int min_pos = min_element(v.begin(), v.end()) - v.begin();
    cout << min({max(max_pos, min_pos) + 1,
                 (n - 1) - min(max_pos, min_pos) + 1,
                 (n - 1) - max_pos + min_pos + 2,
                 (n - 1) - min_pos + max_pos + 2})
         << "\n";
}

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
        solve();
    }
    return 0;
}
