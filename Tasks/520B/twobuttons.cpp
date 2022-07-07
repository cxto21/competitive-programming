#include <iostream>

#include <algorithm>

using namespace std;

int funrecursiva(int n, int m) {
  int ret, aux1, aux2;

  if (n == m) {
    ret = 0;
  } else {
    if (n > m) ret = 1 + funrecursiva(n - 1, m);

    else {
      if (n <= 0) ret = 0;
      else {
        aux1 = 1 + funrecursiva(n - 1, m);
        aux2 = 1 + funrecursiva(n * 2, m);
        ret = min(aux1, aux2);
      }
    }
  }
  return ret;
}

int main() {

  int n;
  int m;

  /* Ingreso de datos */
  cin >> n >> m;

  cout << funrecursiva(n, m);

}
