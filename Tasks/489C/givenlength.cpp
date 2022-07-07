/* 489C - Given Length and Sum of Digits */

#include <iostream>

#include <math.h>

using namespace std;

int main() {
  int s;
  int m;
  cin >> m >> s;
  if (s == 0) {
    if (m == 1) {
      cout << "0 " << 0 << "\n";
    } else {
      cout << "-1 " << -1 << "\n";
    }
  } else if (m < s) {
    cout << "-1 " << -1 << "\n";
  } else {
    /*mín:*/

    int digits[m];
    digits[0] = 1;
    for (int i = 1; i < m; i++) digits[i] = 0;
    int auxs = s - 1;
    int count = m;
    while (auxs > 0) {
      count--;
      digits[count] = 9;
      auxs -= 9;
    }
    if (auxs < 0) {
      digits[count] = count == 0 ? auxs + 10 : auxs + 9;
    }
    for (int i = 0; i < m; i++) cout << digits[i];
    cout << " ";

    /*máx*/

    for (int i = 1; i < m; i++) digits[i] = 0;
    auxs = s;
    count = 0;
    while (auxs > 0) {
      digits[count] = 9;
      count++;
      auxs -= 9;
    }
    if (auxs < 0) digits[count - 1] = auxs + 9;
    for (int i = 0; i < m; i++) cout << digits[i];
    cout << "\n";
  }
}
