#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    set<string> str_set;
    for (int i = 0; i < n; ++i)
    {
        string sub_str;
        for (int j = 0; j < 5 && i + j < n; ++j)
        {
            sub_str.push_back(s[i + j]);
            str_set.insert(sub_str);
        }
    }
    for (int i = 1; i < 6; ++i)
    {
        string mex(i, 'a');
        while (true)
        {
            if (str_set.count(mex) == 0)
            {
                cout << mex << '\n';
                return;
            }
            int idx = i - 1;
            while (idx >= 0 && mex[idx] == 'z')
            {
                mex[idx] = 'a';
                --idx;
            }
            if (idx < 0)
                break;
            ++mex[idx];
        }
    }
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
