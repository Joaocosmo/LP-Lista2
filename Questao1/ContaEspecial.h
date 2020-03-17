#pragma once
#include "Conta.h"

class ContaEspecial : public Conta{
    public:
        ContaEspecial(){}
        ContaEspecial(string nome, double salario, int numero, double saldo)
        :Conta(nome, salario, numero, saldo){}
        virtual ~ContaEspecial(){}

        void definirLimite(){limite = 3*salarioMensal;}
};