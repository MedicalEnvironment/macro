#include <iostream>

#define SPRING_ENABLED   0
#define SUMMER_ENABLED   0
#define AUTUMN_ENABLED   1
#define WINTER_ENABLED   0

int main() {
#if SPRING_ENABLED
    std::cout << "Spring" << std::endl;
#elif SUMMER_ENABLED
    std::cout << "Summer" << std::endl;
#elif AUTUMN_ENABLED
    std::cout << "Autumn" << std::endl;
#elif WINTER_ENABLED
    std::cout << "Winter" << std::endl;
#else
    std::cout << "Invalid season" << std::endl;
#endif

    return 0;
}
