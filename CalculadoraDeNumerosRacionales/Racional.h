#pragma once
#include <iostream>
#include <string>

class Racional {
    int numerador, denominador;
    //metodos privados
    static int calcularMCD(int num, int den);
public:
    Racional();
    Racional(int numerador, int denominador);

    //metodos publicos
    void simplificarFraccion(Racional& fraccion);
    Racional sumDeFraccion(Racional fraccion);
    Racional restaDeFraccion(Racional fraccion);
    Racional multiplicacionDeFraccion(Racional fraccion);
    Racional divisionDeFraccion(Racional fraccion);
    Racional elevacionDeFraccion(Racional fraccion);
    std::string equivalenciaDeFraccion(Racional fraccionA, Racional fraccionB);
    std::string obtenerString();

    int getNumerador() const;
    void setNumerador(int numerador);
    int getDenominador() const;
    void setDenominador(int denominador);
};
