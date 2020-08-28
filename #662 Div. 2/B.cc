#include <iostream>
#include <vector>

using namespace std;

const int kMaxLen = 100000;

int main() {
  int n, q;
  cin >> n;
  vector<int> planks_cnt(kMaxLen + 1);
  vector<int> lens_cnt(kMaxLen + 1);
  for (int i = 0; i < n; ++i) {
    int temp;
    cin >> temp;
    ++planks_cnt[temp];
    ++lens_cnt[planks_cnt[temp]];
  }
  cin >> q;
  for (int i = 0; i < q; ++i) {
    char c;
    int x;
    cin >> c >> x;
    if (c == '+') {
      ++planks_cnt[x];
      ++lens_cnt[planks_cnt[x]];
    } else if (c == '-') {
      --lens_cnt[planks_cnt[x]];
      --planks_cnt[x];
    }
    bool is_yes = false;
    if (lens_cnt[8] >= 1) { is_yes = true; }
    else if (lens_cnt[4] >= 2) { is_yes = true; }
    else if (lens_cnt[6] >= 1 && lens_cnt[2] >= 2) { is_yes = true; }
    else if (lens_cnt[4] >= 1 && lens_cnt[2] >= 3) { is_yes = true; }
    if (is_yes) { cout << "YES\n"; }
    else { cout << "NO\n"; }
  }

  return 0;
}
