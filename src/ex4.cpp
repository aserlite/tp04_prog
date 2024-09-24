#include <iostream>
#include <string>

bool isGreaterThanOneMillion(const std::string& number) {
    if (number.length() > 7) {
        return true;
    } else if (number.length() < 7) {
        return false;
    } else {
        return number > "1000000";
    }
}

int main() {
    std::string number;
    
    do {
        std::cout << "Entrez un nombre entier positif supérieur à 1 000 000: ";
        std::cin >> number;
    } while (!isGreaterThanOneMillion(number));
    
    int digitCount[10] = {0};
    
    for (char digitChar : number) {
        int digit = digitChar - '0';
        digitCount[digit]++;
    }
    
    int mostFrequentDigit = 0;
    int maxCount = digitCount[0];
    for (int i = 1; i < 10; ++i) {
        if (digitCount[i] > maxCount) {
            mostFrequentDigit = i;
            maxCount = digitCount[i];
        }
    }
    
    std::cout << "Le chiffre qui apparaît le plus souvent est: " << mostFrequentDigit << std::endl;
    
    return 0;
}