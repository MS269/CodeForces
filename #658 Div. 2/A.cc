#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> a, b;

void TestCase() {
  a.clear();
  b.clear();
  cin >> n >> m;
  a.resize(n);
  b.resize(m);
  for (auto& i : a) cin >> i;
  for (auto& i : b) cin >> i;
  vector<int> acnt(1001);
  vector<int> bcnt(1001);
  for (auto i : a) ++acnt[i];
  for (auto i : b) ++bcnt[i];
  for (int i = 1; i <= 1000; ++i) {
    if (acnt[i] > 0 && bcnt[i] > 0) {
      cout << "YES \n";
      cout << "1 " << i << '\n';
      return;
    }
  }
  cout << "NO \n";
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}
