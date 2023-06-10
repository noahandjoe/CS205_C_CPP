#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

float calculateAverage(int mark1, int mark2, int mark3, int mark4){
    assert(mark1 >= 0 && mark1 <= 100);
    assert(mark2 >= 0 && mark2 <= 100);
    assert(mark3 >= 0 && mark3 <= 100);
    assert(mark4 >= 0 && mark4 <= 100);
    
    vector<int> marks = {mark1, mark2, mark3, mark4};


    float sum = mark1 + mark2 + mark3 + mark4;
    return sum / marks.size();
}

int main(){
    char choice = 'y';
    while(choice == 'y' || choice == 'Y'){
        int mark1, mark2, mark3, mark4;
        
        cout<<"Please enter marks for 4 courses: ";
        cin>>mark1>>mark2>>mark3>>mark4;

        float average = calculateAverage(mark1, mark2, mark3, mark4);
        cout<<"The average of the four courses is :"<<average<<endl;

        cout<<"Would you want to enter another marks for 4 courses(y/n)? ";
        cin>>choice;
    }

    cout<<"Bye, see you next time."<<endl;

    return 0;
}