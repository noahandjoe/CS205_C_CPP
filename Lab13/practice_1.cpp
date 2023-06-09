#include <iostream>
using namespace std;

class Engine{
    private:
    int cylinder;

    public:
    Engine(int nc):cylinder(nc){cout<<"Constructor: Engine(int)\n";}
    ~Engine(){cout<<"Destructor:~Engine()\n";}
    int getCylinder(){return cylinder;}
    void start(){cout<<getCylinder()<<" cylinder engine started"<<endl;}
};

class Car{
    private:
    Engine eng;
    
    public:
    Car(int n = 4):eng(n){cout<<"Constructor:Car(int)\n";}
    ~Car(){cout<<"Destructor:~Car()\n";}
    void start(){
        cout<<"car with "<<eng.getCylinder()<<" cylinder engine started"<<endl;
        eng.start();
    }
};

int main(){
    Car car1;
    Car car2(8);

    car1.start();
    car2.start();

    return 0;
}

/*
Constructor: Engine(int)
Constructor:Car(int)
Constructor: Engine(int)
Constructor:Car(int)
car with 4 cylinder engine started
4 cylinder engine started
car with 8 cylinder engine started
8 cylinder engine started
Destructor:~Car()
Destructor:~Engine()
Destructor:~Car()
Destructor:~Engine()

*/