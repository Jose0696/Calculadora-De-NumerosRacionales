#include "Racional.h"

Racional::Racional() {}

Racional::Racional(int numerador, int denominador) : numerador(numerador), denominador(denominador) {}

int Racional::calcularMCD(int num, int den) {
    int resultado = 0;

    if (den == 0) {
        resultado = num;
    }
    else {
        resultado = calcularMCD(den, num % den);
    }
    return resultado;
}

void Racional::simplificarFraccion(Racional& fraccion) {
    if (fraccion.numerador != 0) {
        int numeroMCD = calcularMCD(abs(fraccion.getNumerador()), fraccion.getDenominador());
        int numerador = fraccion.getNumerador() / numeroMCD;
        int denominador = fraccion.getDenominador() / numeroMCD;
        fraccion.setNumerador(numerador);
        fraccion.setDenominador(denominador);
    }
}

Racional Racional::sumDeFraccion(Racional fraccion) {
    Racional resultado;
    resultado.setNumerador(numerador * fraccion.getDenominador() + getDenominador() * fraccion.getNumerador());
    resultado.setDenominador(denominador * fraccion.getDenominador());
    simplificarFraccion(resultado);


    return resultado;
}

Racional Racional::restaDeFraccion(Racional fraccion) {
    Racional resultado;
    resultado.setNumerador(numerador * fraccion.getDenominador() - getDenominador() * fraccion.getNumerador());
    resultado.setDenominador(denominador * fraccion.getDenominador());
    simplificarFraccion(resultado);


    return resultado;

}

Racional Racional::multiplicacionDeFraccion(Racional fraccion) {
    Racional resultado;
    resultado.setNumerador(numerador * fraccion.getNumerador());
    resultado.setDenominador(denominador * fraccion.getDenominador());
    simplificarFraccion(resultado);
    return resultado;
}

Racional Racional::divisionDeFraccion(Racional fraccion) {
    Racional resultado;
    resultado.setNumerador((getNumerador() * fraccion.getDenominador()));
    resultado.setDenominador((getDenominador() * fraccion.getNumerador()));
    simplificarFraccion(resultado);
    return resultado;

}

Racional Racional::elevacionDeFraccion(Racional fraccion) {
    Racional resultado;
    resultado.setNumerador((numerador * fraccion.getNumerador()));
    resultado.setDenominador((fraccion.getDenominador() * denominador));
    simplificarFraccion(resultado);
    return resultado;
}

std::string Racional::equivalenciaDeFraccion(Racional fraccionA, Racional fraccionB) {
    simplificarFraccion(fraccionA);
    simplificarFraccion(fraccionB);
    if (fraccionA.getNumerador() == fraccionB.getNumerador() && fraccionA.getDenominador() == fraccionB.getDenominador())
        return "SON EQUIVALENTES\n";
    else
        return "NO SON EQUIVALENTES\n";
}

std::string Racional::obtenerString() {
    std::string resultado;
    resultado = std::to_string(getNumerador()) + "/" + std::to_string(getDenominador());
    return resultado;
}

int Racional::getNumerador() const {
    return numerador;
}

void Racional::setNumerador(int numerador) {
    Racional::numerador = numerador;
}

int Racional::getDenominador() const {
    return denominador;
}

void Racional::setDenominador(int denominador) {
    Racional::denominador = denominador;
}
