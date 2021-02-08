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
    const string s = "989";
    cout << s.substr(0, n);
    for (int i = 3; i < n; ++i)
      cout << (i - 3) % 10;
    cout << '\n';
  }
  return 0;
}
