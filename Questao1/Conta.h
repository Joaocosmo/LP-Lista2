#pragma once
#include "IConta.h"
#include <string>

using namespace std;
class Conta : public IConta{
    public:
        Conta(){}
        Conta(string nome, double salario, int numero, double saldo){
            nomeCliente = nome;
            salarioMensal = salario;
            numeroConta = numero;
            this->saldo = saldo;
        }
        virtual ~Conta(){}

        string getNome(){return nomeCliente;}
        double getSalario(){return salarioMensal;}
        double getSaldo(){return saldo;}
        double getLimite(){return limite;}
        int getNumero(){return numeroConta;}
        void setNome(string n){nomeCliente = n;}
        void setSalario(double s){salarioMensal = s;}
        void setSaldo(double s){saldo = s;}
        void setLimite(double l){limite = l;}
        void setNumero(int n){numeroConta = n;}

        void depositar(double d){saldo+=d;}
        void sacar(double d){saldo-=d;}
        virtual void definirLimite(){limite = 2*salarioMensal;}

    protected:
        string nomeCliente;
        double salarioMensal, saldo, limite;
        int numeroConta;
};