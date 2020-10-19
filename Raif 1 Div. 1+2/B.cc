#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    int clockwise = 0, anticlockwise = 0, ans = 0;
    s += s[0];
    for (int i = 0; i < n; ++i) {
      if (s[i] == '>') {
        ++clockwise;
        if (s[i] == '-') ++ans;
      } else if (s[i] == '<') {
        ++anticlockwise;
        if (s[i] == '-') ++ans;
      } else if (s[i] == '-') {
        ++ans;
      }
    }
    cout << (clockwise == 0 || anticlockwise == 0 ? n : ans) << '\n';
  }
  return 0;
}
