#include <iostream>
#include <array>

int main() {
    const int SIZE = 10;
    std::array<int, SIZE> numbers;
    
    std::cout << "Entrez 10 entiers compris entre 0 et 5:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        do {
            std::cout << "Entier " << i + 1 << ": ";
            std::cin >> numbers[i];
        } while (numbers[i] < 0 || numbers[i] > 5);
    }
    
    int index = 0;
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] != 3) {
            numbers[index++] = numbers[i];
        }
    }
    
    while (index < SIZE) {
        numbers[index++] = 0;
    }
    
    std::cout << "Tableau modifié: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}