#include <iostream>
#include <vector>

using namespace std;

void TestCase() {
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; ++i) { cin >> s[i]; }
  vector<int> cnt(26);
  for (int i = 0; i < n; ++i) { for (auto a : s[i]) { ++cnt[a - 'a']; } }
  for (auto a : cnt) {
    if (a % n != 0) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
