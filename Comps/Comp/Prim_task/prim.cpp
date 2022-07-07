#include <bits/stdc++.h>

using namespace std;

#define DBG(x) cout << #x << “ = ” << (x) << "\n"

bool isPrime(int m) {
  bool result = true;
  int i = 2;
  while (i <= m / 2) {
    if (m % i == 0) {
      result = false;
      i = m;
    }
    i++;
  }
  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k, j, contador = 0, result = 0, b = 0;
  cin >> n >> k;
  int p[n];

  for (int i = 0; i < n; ++i) {
    if (isPrime(i)) {
      p[contador] = i;
      contador++;
    }
  }
  for (unsigned int i = 0; i < n; ++i) {
    cout << p[contador];
  }

  /*


      for (unsigned int i=5; i<= n; ++i) {
          if (isPrime(i)) {
              p[contador] = i;
              ++contador;
              for (unsigned int j=contador-2; j1; j-=2) {
                  if (p[contador -1] == p[j] + p[j] + 1) {
                      ++result;
                      j=0;
                  }
              }
          }
          if (result == k) {
              b=1;
              break;
          }
      }
      if (b) {
          cout << "YES" << "\n";
      }
      else {
          cout << "NO" << "\n";
      }/
      */

}
