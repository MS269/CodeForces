#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    vector<int> ones;
    int cnt = 0;
    for (auto& a : s) {
      if (a == '1') {
        ++cnt;
      } else {
        ones.push_back(cnt);
        cnt = 0;
      }
    }
    ones.push_back(cnt);
    sort(ones.rbegin(), ones.rend());
    int ans = 0;
    for (int i = 0; i < ones.size(); i += 2) { ans += ones[i]; }
    cout << ans << "\n";
  }

  return 0;
}
