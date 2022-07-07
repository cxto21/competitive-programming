#include <bits/stdc++.h>

using namespace std;

#define DBG(x) cout << #x << " = " << (x) << " <<dbg\n"

set < int > * graf = nullptr; // Set nodo y  set a las conexiones
bool * visitadosarr;
int cantidadvisitados = 0;

// cantidad de nodos que tienen un camino
int dfs(int node) {
  visitadosarr[node] = true;
  cantidadvisitados++;
  int res = 1;
  for (int y: graf[node]) { 
    if (!visitadosarr[y]) { 
      res += dfs(y);
    }
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int cantVertices, cantAristas, cantGobiernos, nodo1, nodo2, gobmax, aux, ans = 0;
  cin >> cantVertices >> cantAristas >> cantGobiernos;
  
  graf = new set < int > [cantVertices];
  visitadosarr = new bool[cantVertices];
  int * nodosPorGob = new int[cantVertices];
  set < int > gobiernos;

  for (int i = 0; i < cantGobiernos; ++i) {
    cin >> aux;
    gobiernos.insert(aux - 1);
  }

  for (int i = 0; i < cantAristas; ++i) {
    cin >> nodo1 >> nodo2;
    graf[nodo1 - 1].insert(nodo2 - 1);
    graf[nodo2 - 1].insert(nodo1 - 1);
  }

  gobmax = * (gobiernos.begin());
  for (set < int > ::iterator it = gobiernos.begin(); it != gobiernos.end(); ++it) {
    nodosPorGob[ * it] = dfs( * it);
    gobmax = (nodosPorGob[ * it] > nodosPorGob[gobmax]) ? * it : gobmax;
    ans += (nodosPorGob[ * it]) * (nodosPorGob[ * it] - 1) / 2; 
  }

  ans -= (nodosPorGob[gobmax]) * (nodosPorGob[gobmax] - 1) / 2;
  nodosPorGob[gobmax] += cantVertices - cantidadvisitados;
  ans += (nodosPorGob[gobmax]) * (nodosPorGob[gobmax] - 1) / 2;
  cout << ans - cantAristas << "\n";
}
