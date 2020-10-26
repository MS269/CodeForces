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
    int n, m, sum = 0, temp;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
      cin >> temp;
      sum += temp;
    }
    cout << (sum == m ? "YES" : "NO") << '\n';
  }
  cerr << clock() / 1000.0 << "SEC \n";
  return 0;
}
