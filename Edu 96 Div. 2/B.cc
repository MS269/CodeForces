#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int64_t> a(n);
    for (auto& i : a) cin >> i;
    sort(a.rbegin(), a.rend());
    for (int i = 1; i <= k; ++i) a[0] += a[i];
    cout << a[0] << '\n';
  }
  return 0;
}
