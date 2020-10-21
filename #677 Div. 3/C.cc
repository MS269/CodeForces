#include <bits/stdc++.h>

using namespace std;

int Find(const vector<int>& a) {
  int maxa = *max_element(a.begin(), a.end()), n = a.size();
  for (int i = 0; i < n; ++i) {
    if (a[i] == maxa) {
      if (i - 1 >= 0 && a[i - 1] < a[i]) return i + 1;
      if (i + 1 < n && a[i + 1] < a[i]) return i + 1;
    }
  }
  return -1;
}

int main() {
#ifdef _DEBUG
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
    cout << Find(a) << '\n';
  }
  return 0;
}
