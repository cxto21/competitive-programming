    #include <bits/stdc++.h>

    using namespace std;
    map < long long, long long > mx;

    int main() {
      int x, y;
      int n;
      cin >> n;
      long long sum = 0;
      for (int i = 0; i < n; i++) {
        cin >> x >> y;
        mx[x] = y;
        sum += y;
      }
      cin >> n;
      for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (y > mx[x]) sum += y - mx[x];
      }
      cout << sum;
    }
