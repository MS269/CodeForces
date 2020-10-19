#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int size = 0;
    for (auto i : s) (size && i == 'B') ? --size : ++size;
    cout << size << '\n';
  }
  return 0;
}
