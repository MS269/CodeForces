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
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; ++i) {
      int temp;
      cin >> temp;
      temp == 1 ? ++cnt1 : ++cnt2;
    }
    bool is_yes = false;
    if (cnt1 % 2 == 0) {
      if (cnt2 % 2 == 0) {
        is_yes = true;
      } else {
        if (cnt1 != 0) is_yes = true;
      }
    }
    cout << (is_yes ? "YES" : "NO") << '\n';
  }
  return 0;
}
