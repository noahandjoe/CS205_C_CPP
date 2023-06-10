#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

class OutOfRangeException : public exception{
    public:
    const char* what() const noexcept override{
        return "Mark is out of range (0-100)";
    }
};

float calculateAverage(int mark1, int mark2, int mark3, int mark4){
    vector<int> marks = {mark1, mark2, mark3, mark4};
    for(int mark:marks){
        if(mark<0 || mark>100){
            throw OutOfRangeException();
        }
    }

    float sum = mark1 + mark2 + mark3 + mark4;
    return sum / marks.size();
}

int main(){
    char choice = 'y';
    while(choice == 'y' || choice == 'Y'){
        try{
            int mark1, mark2, mark3, mark4;
            cout<<"Please enter marks for 4 courses: ";
            cin>>mark1>>mark2>>mark3>>mark4;

            float average = calculateAverage(mark1, mark2, mark3, mark4);
            cout<<"The average of the four courses is :"<<average<<endl;
        }catch(const OutOfRangeException& e){
            cout<<e.what()<<endl;
        }

        cout<<"Would you want to enter another marks for 4 courses(y/n)? ";
        cin>>choice;
    }

    cout<<"Bye, see you next time."<<endl;

    return 0;
}