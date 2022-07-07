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

  int a, b, c, d, aux;
  cin >> a >> b >> c >> d;

  aux = max({
    a,
    b,
    c,
    d
  });

  if (aux - a != 0) {
    cout << aux - a << " ";
  }

  if (aux - b != 0) {
    cout << aux - b << " ";
  }

  if (aux - c != 0) {
    cout << aux - c << " ";
  }

  if (aux - d != 0) {
    cout << aux - d << "\n";
  }

}
