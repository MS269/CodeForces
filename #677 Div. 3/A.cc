#include <bits/stdc++.h>

using namespace std;

const vector<int> kFactorial{1, 1, 3, 6, 10};

int main() {
#ifdef _DEBUG
  freopen("input.txt", "r", stdin);
#endif // _DEBUG
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string x;
    cin >> x;
    cout << 10 * (x[0] - '1') + kFactorial[x.size()] << '\n';
  }
  return 0;
}
