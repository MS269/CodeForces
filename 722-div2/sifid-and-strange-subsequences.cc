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
        int n;
        cin >> n;
        vector<int> a(n);
        int ans = 0, min_positive = INT_MAX;
        for (auto &i : a)
        {
            cin >> i;
            ans += (i <= 0);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; ++i)
            if (a[i] > 0)
                min_positive = min(min_positive, a[i]);
        bool flag = (min_positive < INT_MAX);
        for (int i = 0; i < n - 1; ++i)
            if (a[i] <= 0)
                flag &= (a[i + 1] - a[i] >= min_positive);
        cout << ans + (flag ? 1 : 0) << '\n';
    }
    return 0;
}
