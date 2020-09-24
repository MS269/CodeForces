#include <iostream>

using namespace std;

int n;
string digits;

void TestCase() {
  cin >> n;
  cin >> digits;
  if (n % 2 == 1) {
    bool raze = false;
    for (int i = 0; i < n; i += 2) if ((digits[i] - '0') % 2 == 1) raze = true;
    if (raze) cout << "1 \n"; else cout << "2 \n";
  } else if (n % 2 == 0) {
    bool breach = false;
    for (int i = 1; i < n; i += 2)  if ((digits[i] - '0') % 2 == 0) breach = true;
    if (breach) cout << "2 \n"; else cout << "1 \n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) TestCase();

  return 0;
}
