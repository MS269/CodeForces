#include <iostream>
#include <vector>

using namespace std;

void TestCase() {
  int n;
  cin >> n;
  vector<int> a(n);
  int zero_cnt = 0;
  for (auto& x : a) {
    cin >> x;
    if (x == 0) { ++zero_cnt; }
  }
  if (zero_cnt >= n / 2) {
    cout << zero_cnt << '\n';
    for (int i = 0; i < zero_cnt; i++) { cout << "0 "; }
  } else {
    int one_cnt = n - zero_cnt;
    cout << one_cnt - one_cnt % 2 << '\n';
    for (int i = 0; i < one_cnt - one_cnt % 2; i++) { cout << "1 "; }
  }
  cout << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) { TestCase(); }

  return 0;
}
