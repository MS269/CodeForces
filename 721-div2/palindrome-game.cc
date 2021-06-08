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
        string s;
        cin >> n >> s;
        int cnt0 = 0;
        for (auto &c : s)
            cnt0 += (c == '0');
        if (cnt0 == 1)
            cout << "BOB\n";
        else if (cnt0 % 2)
            cout << "ALICE\n";
        else
            cout << "BOB\n";
    }
    return 0;
}
