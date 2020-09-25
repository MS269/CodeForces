#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> a;

void TestCase() {
  cin >> n;
  a.clear();
  a.resize(n);
  for (auto& i : a) cin >> i;
  bool is_yes = false;
  for (int i = 1; i < n; ++i) {
    if (a[i] >= a[i - 1]) {
      is_yes = true;
      break;
    }
  }
  cout << (is_yes ? "YES" : "NO") << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}
