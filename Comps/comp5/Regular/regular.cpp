#include <bits/stdc++.h>

using namespace std;
#define DBG(x) cout << #x << “ = ” << (x) << "\n"
#define END(e) {
  cout << (e) << "\n";
  return EXIT_SUCCESS;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, maxab = 1;
  cin >> n;

  char aux;
  int array[n / 2] = {
    0
  };

  bool jeje[n / 2] = {
    0
  };

  for (int i = 0, j = 0; i < n && j < n; i++, j++) {
    cin >> aux;
    if (aux == 1) {
      ++array[i];
      jeje[n / 2] = true;
    } else {

    }

  }

  for (int i = 0; i++)

}
