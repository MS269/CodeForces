#include <bits/stdc++.h>

using namespace std;

void solve()
{
    vector<int> s(4);
    for (auto &x : s)
        cin >> x;
    if (min(s[0], s[1]) > max(s[2], s[3]) || max(s[0], s[1]) < min(s[2], s[3]))
        cout << "NO\n";
    else
        cout << "YES\n";
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
        solve();
    return 0;
}
