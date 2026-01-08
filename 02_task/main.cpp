#include <iostream>

//#define SPRING "Spring"
#define SUMMER "Summer"
//#define AUTUMN "Autumn"
//#define WINTER "Winter"

#if defined SPRING
int main() {
    std::cout << SPRING << std::endl;
}
#elif defined SUMMER
int main() {
    std::cout << SUMMER << std::endl;
}
#elif defined AUTUMN
int main() {
    std::cout << AUTUMN << std::endl;
}
#elif defined WINTER
int main() {
    std::cout << WINTER << std::endl;
}
#else
int main() {
    std::cout << "It's not the time of year" << std::endl;
}
#endif




