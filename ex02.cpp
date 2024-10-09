#include <iostream>
#include <string>

int main() {
    std::string texto;
    std::cout << "Digite um texto: ";
    std::getline(std::cin, texto);

    int contador = 0;
    for (char c : texto) {
        if(c == 'a' || c == 'A') {
            contador++;
        }
    }

    std::cout << "O texto possui " << contador << " letras 'a'" << std::endl;
}