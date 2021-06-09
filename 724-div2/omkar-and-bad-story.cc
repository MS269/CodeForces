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
        bool negative_exists = false;
        for (auto &i : a)
        {
            cin >> i;
            if (i < 0)
                negative_exists = true;
        }
        if (negative_exists)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << "101\n";
            for (int i = 0; i <= 100; ++i)
                cout << i << ' ';
            cout << '\n';
        }
    }
    return 0;
}
