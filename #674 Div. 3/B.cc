#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<vector<int>> types;

void Solve() {
  if (m % 2 == 0) {
    for (auto i : types) {
      if (i[1] == i[2]) {
        cout << "YES \n";
        return;
      }
    }
  }
  cout << "NO \n";
}

void Input() {
  cin >> n >> m;
  types.clear();
  types.resize(n, vector<int>(4));
  for (auto& i : types) for (auto& j : i) cin >> j;
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
