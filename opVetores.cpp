//
// Created by Filipe Quintal on 2020-03-05.
//
#include <iostream>
#include "opVetores.h"
using namespace std;


void inserirDados(int v[], int tamanho){
    cout << "Insira os "<< tamanho <<" dados separados por enter:";
    for(int i=0;i<tamanho;i++){
        cin>>v[i];
    }
}
void escreverDados(int v[], int tamanho){
    for(int i=0;i<tamanho;i++){
        cout << v[i] << " , ";
    }
}

float somarElementos(int v[], int tamanho){
    float soma = 0;
    for(int i=0;i<tamanho;i++) {
        soma = soma + v[i];
    }
    return soma;
}

float media(int v[], int tamanho){
    return (somarElementos(v,tamanho)/tamanho);
}