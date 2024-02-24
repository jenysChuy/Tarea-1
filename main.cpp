#include <iostream>

int main() {
    int opcion;

    do {
        std::cout << "========== Opciones ==========" << std::endl;
        std::cout << "1. Tabla de 4 y 6" << std::endl;
        std::cout << "2. Factorial" << std::endl;
        std::cout << "3. fibonacci" << std::endl;
        std::cout << "4. Par y Impar" << std::endl;
        std::cout << "5. Tablas de multiplicar" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "==========================" << std::endl;
        std::cout << "Selecciona una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::cout << "Tabla del 4 y 6." << std::endl;
                int numero = 4;
                int respuesta;
                for (int i = 0; i <= 10; ++i) {
                    respuesta = numero * i;
                    std::cout << "4 * " << i << " = " << respuesta << std::endl;
                }
                std::cout << std::endl;

                for (int i = 0; i <= 10; ++i) {
                    respuesta = numero * i;
                    std::cout << "6 * " << i << " = " << respuesta << std::endl;
                }
                break;
            }
            case 2: {
                std::cout << "Factorial" << std::endl;
                int n, i;
                long double factorial;
                std::cout << "Introduce cualquier numero: ";
                std::cin >> n;
                factorial = 1;
                for (i = 1; i <= n; i++)
                    factorial = factorial * i;
                std::cout << std::endl << "Factorial de " << n << " -> " << factorial << std::endl;
                break;
            }
            case 3: {
                std::cout << "fibonacci." << std::endl;
                unsigned long long aux = 1, fib = 0, lim, init;
                std::cout << "Ingrese un numero para fibonacci: ";
                std::cin >> lim;
                if (lim > 0) {
                    for (init = 1; init <= lim; init++) {
                        std::cout << "[" << fib << "] ";
                        aux += fib;
                        fib = aux - fib;
                    }
                } else {
                    std::cout << "El numero debe ser mayor a cero!!" << std::endl;
                }
                std::cout << "\n";
                break;
            }
            case 4: {
                std::cout << "Par y Impar." << std::endl;
                std::cout << "Introduce Cualquier Numero :)  ";
                int numero;
                std::cin >> numero;
                if (numero % 2 == 0)
                    std::cout << std::endl << numero << " es par\n";
                else
                    std::cout << std::endl << numero << " es impar\n";
                break;
            }
            case 5: {
                std::cout << "Tablas de multiplicar." << std::endl;
                int numero;
                do {
                    std::cout << "Ingrese cualquier numero: ";
                    std::cin >> numero;
                } while ((numero < 1) || (numero > 10));
                for (int i = 1; i <= 10; i++) {
                    std::cout << numero << " * " << i << " = " << numero * i << std::endl;
                }
                std::cout << "\n\n";
                break;
            }
            case 6: {
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            }
            default: {
                std::cout << "Opción no válida. Por favor, selecciona una opción válida." << std::endl;
                break;
            }
        }

    } while (opcion != 6);

    return 0;
}

