#include <iostream>
#include "stuinfo.hpp"

void inputstu(stuinfo stu[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "Enter information for student " << i + 1 << ":\n";
        
        std::cout << "Name: ";
        std::cin >> stu[i].name;
        
        double total = 0.0;
        for (int j = 0; j < 3; j++) {
            std::cout << "Score " << j + 1 << ": ";
            std::cin >> stu[i].score[j];
            total += stu[i].score[j];
        }
        
        stu[i].ave = total / 3;
    }
}

void showstu(stuinfo stu[], int n) {
    std::cout << "Student information:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Name: " << stu[i].name << "\n";
        std::cout << "Scores: ";
        for (int j = 0; j < 3; j++) {
            std::cout << stu[i].score[j] << " ";
        }
        std::cout << "\n";
        std::cout << "Average: " << stu[i].ave << "\n";
        std::cout << "\n";
    }
}
