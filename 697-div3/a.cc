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
        int64_t n;
        cin >> n;
        cout << (n & (n - 1) ? "YES" : "NO") << '\n';
    }
    return 0;
}

// n & (n - 1) to check whether it is the power of 2
