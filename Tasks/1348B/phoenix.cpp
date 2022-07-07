#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  for (int i = 0; i < t; ++i) {
    int n, k, counter, l;

    cin >> n >> k;
    set < int > a;
    cin >> l;

    a.insert(l);

    for (unsigned int i = 1; i < n; ++i) {
      cin >> l;
      bool is_in = a.find(l) != a.end();
      if (!is_in) {
        a.insert(l);
      }
    }
    if (a.size() > k) {
      cout << -1 << "\n";
    } else {
      for (unsigned int i = 0; i < (a.size * 2) - 1; i++) {
        if (i < n) {
          cout << a.find(i) << " ";
        } else {
          if (i != (a.size * 2) - 1) {
            cout << a.find(i % n) << " ";
          } else {
            cout << a.find(i % n) << "\n";
          }
        }
      }
    }
  }

}
