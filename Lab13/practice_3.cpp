#include <iostream>
using namespace std;

template<typename T, size_t size>
class A{
    private:
    T arr[size];

    public:
    void insert(){
        int i = 1;
        for(int j = 0; j<size; j++){
            arr[j] = i;
            i++;
        }
    }

    void display(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    A<int, 10> t1;
    t1.insert();
    t1.display();

    return 0;
}

//1 2 3 4 5 6 7 8 9 10 