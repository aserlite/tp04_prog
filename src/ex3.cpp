#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string word;
    
    std::cout << "Enter a word: ";
    std::cin >> word;
    
    std::string reversedWord = word;
    std::reverse(reversedWord.begin(), reversedWord.end());
    
    if (word == reversedWord) {
        std::cout << word << " is a palindrome." << std::endl;
    } else {
        std::cout << word << " is not a palindrome." << std::endl;
    }
    
    return 0;
}