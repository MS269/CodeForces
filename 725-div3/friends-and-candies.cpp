#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int avg = 0;
    for (int &e : v)
    {
        cin >> e;
        avg += e;
    }
    if (avg % n > 0)
    {
        cout << "-1\n";
        return;
    }
    avg /= n;
    int cnt = 0;
    for (int &e : v)
    {
        if (e > avg)
        {
            ++cnt;
        }
    }
    cout << cnt << '\n';
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
