#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    int x = a & b;
    cout << (a ^ x) + (b ^ x) << '\n';
  }
  return 0;
}
