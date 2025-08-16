#pragma once

#include <iostream> 
#include <vector>

using namespace std;

//Um grafo G = (VE) pode ser representado como uma coleção de listas de adjacência ou como uma matriz de adjacência.
//Uma representação por lista de adjacência pode ser preferível no caso do grafo ser esparso. Ou seja, se o número de arestas é muito menor que o quadrado do número de vértices.
//Uma representação por matriz de adjacência pode ser preferível no caso do grafo ser denso. Ou seja, se o número de aresta é próximo do quadrado do número de vértices.
//Também é preferível usar matriz de adjacência se precisarmos saber rapidamente se dois vértices específicos estão conectados por uma aresta

//Nessa representação o grafo está representado como uma COLEÇÃO DE LISTA DE ADJACÊNCIA
class Graph1{
public:

    //na posição i do vector de vector se encontra a lista de adjacência do vértice i
    vector<vector<int>> lista_de_adjacencia;

    static void print(Graph1 grafo);

};