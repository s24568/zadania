#include <iostream>

int main() {

    int liczba;

    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;

    if (liczba<0) {

        std::cout << "Wartosc absolutna z " << liczba << " to " << liczba*-1 << "\n";
    }

    else {
        std::cout << "Wartosc absolutna z " << liczba << " to " << liczba << "\n";
    }

    return 0;
}
