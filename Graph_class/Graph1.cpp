#include "Graph1.hpp"
#include <vector>
#include <iostream>

using namespace std;

void Graph1::print(Graph1 grafo){
   
    for(int i=0; i< grafo.lista_de_adjacencia.size(); i++){
        cout<<"vizinhos do node "<<i<<": ";
        for(int i2 = 0; i2<grafo.lista_de_adjacencia[i].size();i2++){
            cout<< grafo.lista_de_adjacencia[i][i2]<<" ";
        }
        cout<<endl<<endl;
    }
    
}