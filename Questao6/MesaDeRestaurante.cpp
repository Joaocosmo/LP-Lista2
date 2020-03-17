#include "MesaDeRestaurante.h"


void MesaDeRestaurante::adicionaAoPedido(Pedido& p){
    pedidos.push_back(p);
}
void MesaDeRestaurante::zeraPedidos(){
    for(Pedido& i : pedidos) i.setQuantidade(0);
}
float MesaDeRestaurante::calculaTotal(){
    float total = 0;
    for(Pedido& i : pedidos) total += i.getQuantidade * i.getPreco;
    return total;
}