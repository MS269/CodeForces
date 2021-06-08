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
        int x;
        bool is_yes = false;
        cin >> x;
        for (int i = 0; i < 20; ++i)
        {
            if (x % 11 == 0)
            {
                is_yes = true;
                break;
            }
            x -= 111;
            if (x < 0)
                break;
        }
        cout << (is_yes ? "YES" : "NO") << '\n';
    }
    return 0;
}
