#include <iostream>
using namespace std;

enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, saturday};
enum Weather{Sunny, Rainy, Cloudy};

struct DayInfo{
    Day day;
    Weather weather;
};

bool canTravel(DayInfo dayInfo){
    if(dayInfo.day == Day::saturday || dayInfo.day == Day::Sunday){
        if(dayInfo.weather == Weather::Sunny){
            return true;
        }
    }
    return false;
}

int main(){
    DayInfo day1{Day::saturday, Weather::Sunny};
    DayInfo day2{Day::Monday, Weather::Rainy};

    if (canTravel(day1)) {
        std::cout << "You can travel on the weekend with good weather!" << std::endl;
    } else {
        std::cout << "You cannot travel on the weekend or the weather is not good." << std::endl;
    }

    if (canTravel(day2)) {
        std::cout << "You can travel on the weekend with good weather!" << std::endl;
    } else {
        std::cout << "You cannot travel on the weekend or the weather is not good." << std::endl;
    }
    
}

// You can travel on the weekend with good weather!
// You cannot travel on the weekend or the weather is not good.