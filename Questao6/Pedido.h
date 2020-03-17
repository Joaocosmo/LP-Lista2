#pragma once
#include <string>
using namespace std;

class Pedido{
    public:
        Pedido(){}
        Pedido(int numero, string descricao, int quantidade, float preco);
        virtual ~Pedido(){}

        int getNumero(){return numero;}
        int getQuantidade(){return quantidade;}
        string getDescricao(){return descricao;}
        float getPreco(){return preco;}
        void setNumero(int n){numero = n;}
        void setQuantidade(int q){quantidade = q;}
        void setDescricao(string d){descricao = d;}
        void setPreco(float p){preco = p;}

    private:
        int numero, quantidade;
        string descricao;
        float preco;
};