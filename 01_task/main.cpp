#include <iostream>

#define DAY_1 "Monday"
#define DAY_2 "Tuesday"
#define DAY_3 "Wednesday"
#define DAY_4 "Thursday"
#define DAY_5 "Friday"
#define DAY_6 "Saturday"
#define DAY_7 "Sunday"

#define DAY_NAME(n) DAY_ ## n

int main() {
    std::cout << "Implementation of advanced input and output of days of the week" << std::endl;

    int day_number;
    std::cin >> day_number;
    switch (day_number) {
        case 1: std::cout << DAY_NAME(1);
            break;
        case 2: std::cout << DAY_NAME(2);
            break;
        case 3: std::cout << DAY_NAME(3);
            break;
        case 4: std::cout << DAY_NAME(4);
            break;
        case 5: std::cout << DAY_NAME(5);
            break;
        case 6: std::cout << DAY_NAME(6);
            break;
        case 7: std::cout << DAY_NAME(7);
            break;
        default: std::cout << "Incorrect input";
    }
}
