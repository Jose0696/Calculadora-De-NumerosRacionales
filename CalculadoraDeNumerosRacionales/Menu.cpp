#include "Menu.h"

void Menu::MenuPrincipal() {
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Calculadora de Numeros Racionales " << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    int numerador;
    int denominador;
    std::cout << "Digite el numerador A: "; std::cin >> numerador;
    std::cout << "Digite el denominador A: "; std::cin >> denominador;
    std::cout << std::endl;

    fraccion1.setNumerador(numerador);
    fraccion1.setDenominador(denominador);

    std::cout << "Digite el numerador B: "; std::cin >> numerador;
    std::cout << "Digite el denominador B: "; std::cin >> denominador;
    std::cout << std::endl;

    fraccion2.setNumerador(numerador);
    fraccion2.setDenominador(denominador);

    system("cls");

    int op = -1;
    do {
        std::cout << "1) Revisar Simplificacion " << std::endl;
        std::cout << "2) Suma de Fracciones " << std::endl;
        std::cout << "3) Resta de Fracciones " << std::endl;
        std::cout << "4) Multiplicacion de Fracciones " << std::endl;
        std::cout << "5) Division de Fracciones " << std::endl;
        std::cout << "6) Elevacion de Fracciones " << std::endl;
        std::cout << "7) Equivalencias de Fracciones " << std::endl;
        std::cout << "0) Salir " << std::endl;
        std::cout << "Digite una opcion: ";
        std::cin >> op;
        system("cls");
        switch (op) {
        case 1:
            std::cout << std::endl;
            std::cout << "SIMPLIFICACION de Fraccion A: " << fraccion1.obtenerString() << std::endl;
            fraccion1.simplificarFraccion(fraccion1);
            std::cout << "RESULTADO: " << fraccion1.obtenerString() << std::endl;

            std::cout << "SIMPLIFICACION de Fraccion B: " << fraccion2.obtenerString() << std::endl;
            fraccion2.simplificarFraccion(fraccion2);
            std::cout << "RESULTADO: " << fraccion2.obtenerString() << std::endl;

            system("pause");
            system("cls");
            break;
        case 2:
            std::cout << std::endl;
            std::cout << "\nSUMAR FRACCIONES" << std::endl;
            aux = fraccion1.sumDeFraccion(fraccion2);
            std::cout << "RESULTADO: " << fraccion1.obtenerString() << " + " << fraccion2.obtenerString() <<
                " = " << aux.obtenerString() << std::endl;
            system("pause");
            system("cls");
            break;
        case 3:
            std::cout << std::endl;
            std::cout << "\nRESTA FRACCIONES" << std::endl;
            aux = fraccion1.restaDeFraccion(fraccion2);
            std::cout << "RESULTADO: " << fraccion1.obtenerString() << " - " << fraccion2.obtenerString() <<
                " = " << aux.obtenerString() << std::endl;
            system("pause");
            system("cls");
            break;

        case 4:
            std::cout << std::endl;
            std::cout << "\nMULTIPLICACION DE FRACCIONES" << std::endl;
            aux = fraccion1.multiplicacionDeFraccion(fraccion2);
            std::cout << "RESULTADO: " << fraccion1.obtenerString() << " * " << fraccion2.obtenerString() <<
                " = " << aux.obtenerString() << std::endl;
            system("pause");
            system("cls");
            break;
        case 5:
            std::cout << std::endl;
            std::cout << "\nDIVISION DE FRACCIONES" << std::endl;
            aux = fraccion1.divisionDeFraccion(fraccion2);
            std::cout << "RESULTADO: " << fraccion1.obtenerString() << " / " << fraccion2.obtenerString() <<
                " = " << aux.obtenerString() << std::endl;
            system("pause");
            system("cls");
            break;

        case 6:
            std::cout << "\nELEVACION DE FRACCIONES" << std::endl;
            aux = fraccion1.elevacionDeFraccion(fraccion1);
            std::cout << "RESULTADO A: " << "(" << fraccion1.obtenerString() << ")^2" <<
                " = " << aux.obtenerString() << std::endl;
            aux = fraccion2.elevacionDeFraccion(fraccion2);
            std::cout << "RESULTADO B: " << "(" << fraccion2.obtenerString() << ")^2" <<
                " = " << aux.obtenerString() << std::endl;
            system("pause");
            system("cls");
            break;

        case 7:
            std::cout << std::endl;
            std::cout << "\nEQUIVALENCIAS DE FRACCIONES" << std::endl;
            std::cout << aux.equivalenciaDeFraccion(fraccion1, fraccion2);
            system("pause");
            system("cls");
            break;

        case 0:
            std::cout << std::endl;
            std::cout << "----------------------------------------" << std::endl;
            std::cout << "MUCHAS GRACIAS :D" << std::endl;
            std::cout << "----------------------------------------" << std::endl;
            system("pause");
            break;
        default:
            std::cout << "ERROR" << std::endl;
            break;
        }
    } while (op != 0);
}
