#include <bits/stdc++.h>

using namespace std;

bool GetRoomsCnt(const int n, int& three, int& five, int& seven) {
  for (three = 0; three <= n / 3 + 1; ++three) {
    for (five = 0; five <= n / 5 + 1; ++five) {
      for (seven = 0; seven <= n / 7 + 1; ++seven) {
        if (three * 3 + five * 5 + seven * 7 == n) return true;
      }
    }
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int three, five, seven;
    if (GetRoomsCnt(n, three, five, seven)) {
      cout << three << ' ' << five << ' ' << seven << '\n';
    } else {
      cout << "-1 \n";
    }
  }
  return 0;
}
