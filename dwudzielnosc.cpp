#include <cstdlib>
#include <iostream>
#include <vector>
#include <list>
#include <queue>
 
using namespace std;
 
vector <vector<int> > graf;
int wierzcholki, krawedzie;
//funkcja wypisuje minimalny i maksymalny stopień grafu
void PrintMinAndMax() {
  int min,max;
  min=max=graf[0].size();
  for (int i = 1; i < graf.size(); ++i) {
    if (graf[i].size() > max) max=graf[i].size();
    if (graf[i].size() < min) min=graf[i].size();
  }
  cout << min << " " << max << " ";
}
 
// Dwudzielnosc i liczba spojnych skladowych
void BFS() {
    int Color[wierzcholki]; // 0 - nieodwiedzony, 1 - pierwszy zbior, 2 - drugi zbior
    for(int i=0;i<wierzcholki;++i) Color[i]=0;
      queue<int> Q;
      int V,CC=0;
  for(int i=0;i<wierzcholki;++i)
  {
      if(Color[i]==0)
      {
            ++CC;//zwiekszamy liczbe spojnych skladowych
            Q.push(i);
            Color[i]=1;//kolorujemy go jakos
            while(!Q.empty())
            {
                V=Q.front();
                Q.pop();
                for(int j=0;j<graf[V].size();++j)
                {
                    if(Color[graf[V][j]] == 0)
                    {
                        Color[graf[V][j]]=(Color[V] == 1 ? 2 : 1);//wszyscy sasiedzi sa drugiego koloru
                        Q.push(graf[V][j]);
                    }
                }
            }
      }
  }
  cout << CC << " ";
  for(int i=0;i<wierzcholki;++i)
  {
      for(int j=0;j<graf[i].size();++j)
      {
          if(Color[i]==Color[graf[i][j]])
          {
              cout << "N\n";
              return;
          }
      }
  }
  cout << "T\n";
}
 
int main(int argc, char** argv) {
    ios_base::sync_with_stdio(0);
 
  int para1, para2;
 
  cin >> wierzcholki >> krawedzie;
  graf.resize(wierzcholki);
  for (int i=0; i < krawedzie; ++i) {
    cin >> para1 >> para2;
    --para1; //wierzcholki numerowane od 1 do size()!
    --para2; //każda operacja wyswietlenia wierzchołków na ekranie
             //musi byc poprzedzona dodaniem jedynki
    graf[para1].push_back(para2);
    graf[para2].push_back(para1);
  }
 
  //przypadek szczegolny, graf pusty, badz złożony z samych punktów
  //zawsze jest dwudzielny, max i min stopień grafu = 0, składowe spojności = wierzchołki
  if (krawedzie == 0) {
    cout << "0 0 " << wierzcholki << " T";
    return (EXIT_SUCCESS);
  }
 
  PrintMinAndMax();
  BFS();
  return (EXIT_SUCCESS);
}
