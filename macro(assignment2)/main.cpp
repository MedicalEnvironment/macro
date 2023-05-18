#include <iostream>

// Uncomment one of the macros below to set the desired season
// #define SEASON_SPRING
// #define SEASON_SUMMER
// #define SEASON_AUTUMN
// #define SEASON_WINTER

int main() {
#if defined(SEASON_SPRING)
    std::cout << "Spring" << std::endl;
#elif defined(SEASON_SUMMER)
    std::cout << "Summer" << std::endl;
#elif defined(SEASON_AUTUMN)
    std::cout << "Autumn" << std::endl;
#elif defined(SEASON_WINTER)
    std::cout << "Winter" << std::endl;
#else
    std::cout << "Invalid season" << std::endl;
#endif

    return 0;
}
