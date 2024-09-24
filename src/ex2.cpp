#include <iostream>
#include <set>
#include <vector>

int main() {
    int levelCompleted;
    int numEnemies;
    
    std::cout << "Enter the level completed: ";
    std::cin >> levelCompleted;
    
    std::cout << "Enter the number of enemies killed: ";
    std::cin >> numEnemies;
    
    std::vector<int> enemyLevels(numEnemies);
    
    for (int i = 0; i < numEnemies; ++i) {
        std::cout << "Enter the level of difficulty for enemy " << i + 1 << ": ";
        std::cin >> enemyLevels[i];
    }
    
    std::set<int> uniqueMultiples;
    
    for (int level : enemyLevels) {
        for (int multiple = level; multiple < levelCompleted; multiple += level) {
            uniqueMultiples.insert(multiple);
        }
    }
    
    int totalEnergyPoints = 0;
    for (int multiple : uniqueMultiples) {
        totalEnergyPoints += multiple;
    }
    
    std::cout << "Total energy points earned: " << totalEnergyPoints << std::endl;
    
    return 0;
}