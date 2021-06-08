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
        for (auto &i : a)
            cin >> i;
        int min = *min_element(a.begin(), a.end());
        int cnt = 0;
        for (auto &i : a)
            if (i > min)
                ++cnt;
        cout << cnt << '\n';
    }
    return 0;
}
