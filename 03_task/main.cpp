#include <iostream>

#define FORLOOP(len) for (int i = 0; i < len; i++)
#define ADD(func, array) { func(array); }
#define SUM(func, array) { func(array); }
#define PRINT(func, array) { func(array); }

void add(int array[10]) {
    int count_people;
    FORLOOP(10) {
        std::cout << "Enter the number of people in the carriage " << i + 1 << ":";
        std::cin >> count_people;
        array[i] = count_people;
    }
}

void sum(int array[10]) {
    int sum = 0;
    FORLOOP(10) {
        sum += array[i];
    }
    std::cout << "Total number of passengers in all carriages: " << sum << std::endl;
}

void print(int array[10]) {
    FORLOOP(10) {
        if (array[i] > 20) {
            std::cout << "There is excess padding in the carriage " << i + 1 << std::endl;
        }
    }
    std::cout << std::endl;
    FORLOOP(10) {
        if (array[i] < 20) {
            std::cout << "There are empty seats in the carriage " << i + 1 << std::endl;
        }
    }
    std::cout << std::endl;
    FORLOOP(10) {
        if (array[i] == 20) {
            std::cout << "All seats are occupied in the carriage " << i + 1 << std::endl;
        }
    }
}

int main() {
    std::cout << "Analysis of the occupancy of cars on a train" << std::endl;

    int amount_carriage[10];

    ADD(add, amount_carriage);
    PRINT(print, amount_carriage);
    SUM(sum, amount_carriage);

}