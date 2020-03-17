#pragma once
#include <exception>

class ValorMuitoAcimaException : public std::exception{
    public:
        const char* what() const throw(){
            return "Valor muito acima";
        }
};