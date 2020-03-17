#pragma once
#include "Pedido.h"
#include <vector>

class MesaDeRestaurante{
    public:
        MesaDeRestaurante(){}
        virtual ~MesaDeRestaurante(){}

        vector<Pedido>& getPedidos(){return pedidos;}
        void setPedidos(vector<Pedido>& p){pedidos = p;}

        void adicionaAoPedido(Pedido& p);
        void zeraPedidos();
        float calculaTotal();
    private:
        vector<Pedido> pedidos;
};  