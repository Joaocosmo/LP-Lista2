#pragma once
#include <exception>

class ValorAcimaException : public std::exception{
    public:
        const char* what() const throw(){
            return "Valor acima!";
        }
};