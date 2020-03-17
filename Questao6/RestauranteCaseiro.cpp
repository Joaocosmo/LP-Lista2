#include "RestauranteCaseiro.h"


void RestauranteCaseiro::adicionarAoPedido(Pedido& p, int n){
    mesas[n].adicionaAoPedido(p);
}
float RestauranteCaseiro::calculaTotalRestaurante(){
    float total = 0;
    for(MesaDeRestaurante& i : mesas) total += i.calculaTotal();
    return total;
}