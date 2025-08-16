#include "Graph2.hpp"
#include <iostream>


using namespace std;

void Graph2::print(Graph2 grafo){
    cout<<"arestas: "<<endl;
    for(int i=0;i<grafo.quantidade_nodes;i++){
        for(int i2 = 0; i2<grafo.quantidade_nodes;i2++){
            if(grafo.matriz_de_adjacencia[i][i2]){
                cout<<"[ "<<i<<" , "<<i2<<" ] ";
            }
            
        }
        cout<<endl;
    }
}


void Graph2::adiciona_arestas(Graph2& grafo, int tamanho){
    grafo.quantidade_nodes = tamanho;
    
   vector<vector<bool>> resultado;

    for(int i = 0; i< tamanho; i++){
        vector<bool> auxiliar(tamanho,true);
        resultado.push_back(auxiliar);        
    }    
    grafo.matriz_de_adjacencia = resultado;
}