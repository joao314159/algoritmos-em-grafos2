#include "Graph2.hpp"
#include <iostream>


using namespace std;

void Graph2::print(Graph2 grafo){
    cout<<"arestas: "<<endl;
    for(int i=0;i<grafo.quantidade_nodes;i++){
        for(int i2 = 0; i2<grafo.quantidade_nodes;i2++){
            if(grafo.quantidade_nodes[i][i2]){
                cout<<"[ "<<i<<" , "<<i2<<" ] ";
            }
            cout<<endl;
        }
    }
}

