#include <iostream>

using namespace std;

const string kMatch = "abacaba";

int n, cnt;
string s, ans;

bool Check(int idx) {
  for (int i = 0; i < 7; ++i) {
    if (ans[idx + i] == '?') ans[idx + i] = kMatch[i];
    else if (ans[idx + i] != kMatch[i]) return false;
  }
  for (int i = 0; i < n; ++i) if (ans[i] == '?') ans[i] = 'z';
  for (int i = 0; i < n; ++i) if (ans.substr(i, 7) == kMatch) ++cnt;
  return cnt == 1;
}

void Solve() {
  for (int i = 0; i <= n - 7; ++i) {
    cnt = 0;
    ans = s;
    if (Check(i)) break;
  }
  if (cnt == 1) {
    cout << "YES \n";
    cout << ans << '\n';
  } else {
    cout << "NO \n";
  }
}

void Input() {
  cin >> n >> s;
}

void TestCase() {
  Input();
  Solve();
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}