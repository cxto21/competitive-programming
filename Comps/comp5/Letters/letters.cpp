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
    string s, t;
    int n;
    int valor;

    getline(cin, s);
    getline(cin, t);

    cin >> n;

    char caracter1, caracter2;

    for (int i = 0; i < n; i++) {
      cin >> caracter1 >> caracter2 >> valor;
      if (s[i] != t[i]) {

      }

      if (s.size() == t.size()) {
        cout << "-1" << "\n";

      }

      /*
          if(s.size() == t.size()){
              cout << "-1" << "\n";
          }


          getline(cin, s);
          getline(cin, t);

          cin >> n;

          for(int i=1; i<=n; ++i){

          }


          if(s.size() == t.size()){
              cout << "-1" << "\n";
          }
      */

    }
