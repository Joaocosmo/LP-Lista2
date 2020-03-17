#pragma once
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

class TestaValidaNumero{
    public:
        TestaValidaNumero(){}
        virtual ~TestaValidaNumero(){}
        void validaNumero(int num){
            if(num <= 0) throw ValorAbaixoException();
            if(num >= 1000) throw ValorMuitoAcimaException();
            if(num > 100) throw ValorAcimaException();      
        }
};