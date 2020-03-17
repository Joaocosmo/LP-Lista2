#pragma once
#include <exception>

class ValorAbaixoException : public std::exception{
    public:
        const char* what() const throw(){
            return "Valor abaixo!";
        }
};