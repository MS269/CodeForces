#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) { cin >> a[i]; }
    sort(a.begin(), a.end());
    bool is_possible = true;
    for (int i = 1; i < n; ++i) { if (abs(a[i] - a[i - 1]) > 1) { is_possible = false; } }
    if (is_possible) { cout << "YES\n"; }
    else { cout << "NO\n"; }
  }

  return 0;
}
