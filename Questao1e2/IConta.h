#pragma once


class IConta{
    public:
        IConta(){}
        virtual ~IConta(){}
        virtual void depositar(double valor) = 0;
        virtual void sacar(double valor) = 0;
};