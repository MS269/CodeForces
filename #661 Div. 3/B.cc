#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i) { cin >> a[i]; }
    for (int i = 0; i < n; ++i) { cin >> b[i]; }
    ll cnt = 0;
    ll a_min = *min_element(a.begin(), a.end());
    ll b_min = *min_element(b.begin(), b.end());
    for (int i = 0; i < n; ++i) { cnt += max(a[i] - a_min, b[i] - b_min); }
    cout << cnt << "\n";
  }

  return 0;
}
