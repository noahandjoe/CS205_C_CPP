#include <iostream>
#include <string>
using namespace std;

struct stuinfo
{
    string name;
    int age;
};

template <typename T>
int compare(const T &a, const T &b)
{
    if (a > b)
        return 1;
    else if (a < b)
        return -1;
    else
        return 0;
}

// explicit specialization for struct stuinfo
template <>
int compare<stuinfo>(const stuinfo &a, const stuinfo &b)
{
    return compare(a.age, b.age);
}

int main()
{
    int int1 = 5, int2 = 10;
    float float1 = 3.5, float2 = 1.2;
    char char1 = 'A', char2 = 'B';
    stuinfo stu1 = {"John", 20};
    stuinfo stu2 = {"Alice", 25};
    std::cout << "Compare of the two integers: " << compare(int1, int2) << std::endl;
    std::cout << "Compare of the two floats: " << compare(float1, float2) << std::endl;
    std::cout << "Compare of the two characters: " << compare(char1, char2) << std::endl;
    std::cout << "Compare of the two structs: " << compare(stu1, stu2) << std::endl;

    return 0;
}