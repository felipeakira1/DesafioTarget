#include <iostream>

int main() {
    int numero;
    std::cout << "Digite um numero: ";
    std::cin >> numero;

    int a = 0, b = 1, fib = 0;
    if (numero == 0 || numero == 1) {
        std::cout << "O numero pertence a sequencia de Fibonacci" << std::endl;
        return 0;
    }

    while(fib < numero) {
        fib = a + b;
        a = b;
        b = fib;
    }

    if(fib == numero) {
        std::cout << "O numero pertence a sequencia de Fibonacci" << std::endl;
    } else {
        std::cout << "O numero nao pertence a sequencia de Fibonacci" << std::endl;
    }
    return 0;
}