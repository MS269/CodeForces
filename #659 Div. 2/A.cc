#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> a;

void TestCase() {
  a.clear();
  cin >> n;
  a.resize(n);
  for (auto& i : a) cin >> i;
  string s(200, 'a');
  cout << s << '\n';
  for (auto i : a) {
    if (s[i] == 'a') s[i] = 'b';
    else s[i] = 'a';
    cout << s << '\n';
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}
