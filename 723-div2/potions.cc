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
    int n;
    cin >> n;
    priority_queue<int64_t, vector<int64_t>, greater<int64_t>> pq;
    int64_t sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int64_t x;
        cin >> x;
        sum += x;
        pq.push(x);
        while (sum < 0)
        {
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << (int)pq.size();
    return 0;
}
