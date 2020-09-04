#include <iostream>
#include <vector>

using namespace std;

void TestCase() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> zeroes(n);
  for (int i = 0; i < n; ++i) { for (int j = 0; j < n; ++j) { if (s[i + j] == '0') { ++zeroes[j]; } } }
  for (auto a : zeroes) {
    if (a != 0) { cout << 0; }
    else { cout << 1; }
  }
  cout << "\n";
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
