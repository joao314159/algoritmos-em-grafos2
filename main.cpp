#include "Graph_class/Graph1.hpp"
#include "Graph_class/Graph2.hpp"

#include <iostream>

using namespace std;
//g++ main.cpp Graph_class/Graph1.cpp Graph_class/Graph2.cpp -o teste.exe
int main(){

    cout<<"teste criando grafo \n";
    Graph1 grafo1;
    Graph2 grafo2;

    Graph2::adiciona_arestas(grafo2,14);
    Graph2::print(grafo2);


    
    


}