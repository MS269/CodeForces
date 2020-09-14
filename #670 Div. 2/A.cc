#include <iostream>
#include <vector>

using namespace std;

const int kMax = 100;

void TestCase() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> cnt(kMax + 1);
  for (auto& i : a) {
    cin >> i;
    ++cnt[i];
  }
  int ans = 0;
  for (int i = 0; cnt[i] >= 2; ++i) ++ans;
  for (int i = 0; cnt[i] >= 1; ++i) ++ans;
  cout << ans << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}
