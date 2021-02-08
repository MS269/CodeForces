#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
#pragma warning(disable : 4996)
  freopen("input.txt", "r", stdin);
#endif // _DEBUG
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    vector<int> dp(n);
    for (int i = n - 1; i >= 0; --i) {
      dp[i] = a[i];
      int j = i + a[i];
      if (j < n) dp[i] += dp[j];
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
  }
  return 0;
}
