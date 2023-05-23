#include <iostream>
#include "stuinfo.hpp"

int main() {
    int numStudents;
    
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;
    
    stuinfo* students = new stuinfo[numStudents];
    
    inputstu(students, numStudents);
    
    showstu(students, numStudents);
    
    delete[] students;
    
    return 0;
}
