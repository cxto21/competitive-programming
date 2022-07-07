#include <bits/stdc++.h>

using namespace std;
#define DBG(x) cout << #x << “ = ” << (x) << "\n"
#define END(e) {
  cout << (e) << "\n";
  return EXIT_SUCCESS;
}

struct cartas {
  int orden;
  int ancho;
  int altura;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, w, h;

  cin >> n >> w >> h;

  cartas arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i].ancho >> arr[i].altura;
    arr[i].orden = i + 1;

  }

}
