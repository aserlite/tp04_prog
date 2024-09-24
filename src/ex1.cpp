#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
    int min = 24000;
    int max = 0;
    size_t const dwarf_count { 200 };

    std::vector<int> calories {};

    std::srand(42);
    
    for (int i = 0; i < dwarf_count; ++i)
    {
      calories.push_back(rand() % 24000 + 100);
    }

    for (int const c : calories)
    {
        if(c < min)
        {
            min = c;
        }else if (max < c)
        {
            max = c;
        }
        
      std::cout << c << ", ";
    }
    std::cout << std::endl;    // std::srand permet de fixer la "seed" du générateur aléatoire (pour avoir des résultats reproductibles)

    std::cout << "max:" << max << std::endl;
    std::cout << "min:" << min << std::endl;

    return 0;
}