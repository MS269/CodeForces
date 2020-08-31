#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

using ll = long long;

const ll kMaxLL = 1e18;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) { cin >> a[i]; }
  sort(a.begin(), a.end());
  ll min_cost = kMaxLL;
  for (int i = 1; i <= pow(kMaxLL, 1.0 / n); ++i) {
    ll cost = 0, c = 1;
    for (int j = 0; j < n; ++j) {
      cost += abs(a[j] - c);
      c *= i;
    }
    min_cost = min(min_cost, cost);
  }
  cout << min_cost;

  return 0;
}
