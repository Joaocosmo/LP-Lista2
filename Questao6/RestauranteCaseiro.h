#pragma once
#include "MesaDeRestaurante.h"

class RestauranteCaseiro{
    public:
        RestauranteCaseiro(){}
        virtual ~RestauranteCaseiro(){}

        vector<MesaDeRestaurante>& getMesas(){return mesas;}
        void setMesas(vector<MesaDeRestaurante>& m){mesas = m;}

        void adicionarAoPedido(Pedido& p, int n);
        float calculaTotalRestaurante();
    private:
        vector<MesaDeRestaurante> mesas;
};