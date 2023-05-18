#include <iostream>

#define DAY_OF_WEEK(number)    \
    do {                        \
        if (number == 1)        \
            std::cout << "Monday"; \
        else if (number == 2)   \
            std::cout << "Tuesday"; \
        else if (number == 3)   \
            std::cout << "Wednesday"; \
        else if (number == 4)   \
            std::cout << "Thursday"; \
        else if (number == 5)   \
            std::cout << "Friday"; \
        else if (number == 6)   \
            std::cout << "Saturday"; \
        else if (number == 7)   \
            std::cout << "Sunday"; \
        else                    \
            std::cout << "Invalid day of the week"; \
    } while(0)

int main() {
    int dayNumber;

    std::cout << "Enter the day of the week as its ordinal number (1-7): ";
    std::cin >> dayNumber;

    DAY_OF_WEEK(dayNumber);

    return 0;
}
