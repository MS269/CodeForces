#include <bits/stdc++.h>

using namespace std;

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
    for (int i = 0; i < n; i += 2)
      cout << a[i + 1] << ' ' << -a[i] << ' ';
    cout << '\n';
  }
  cerr << clock() / 1e3 << "SEC \n";
  return 0;
}
