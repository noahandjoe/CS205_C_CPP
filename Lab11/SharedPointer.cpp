#include <iostream>
#include <memory>

using namespace std;

class A
{
private:
    int x;

public:
    A(int a) : x(a)
    {
        cout << "Constructor with data:" << x << endl;
    }
    ~A()
    {
        cout << "Destructor with data:" << x << endl;
    }
    int getA() const
    {
        return x;
    }
};

int main()
{
    shared_ptr<A> up1(new A(1));
    cout << "up1's data:" << up1->getA() << endl;

    A *aptr = new A(2);
    shared_ptr<A> up2(aptr);
    cout << "up2's data:" << up2->getA() << endl;

    shared_ptr<A> up3 = make_shared<A>(3);
    cout << "up3's data:" << up3->getA() << endl;

    shared_ptr<A> up4 = up3;
    cout << "After initializing, up4's data:" << up4->getA() << endl;
    up4 = up2;
    cout << "After assignment, up4's data:" << up4->getA() << endl;

    return 0;
}

/*
Constructor with data:1
up1's data:1
Constructor with data:2
up2's data:2
Constructor with data:3
up3's data:3
After initializing, up4's data:3
After assignment, up4's data:2
Destructor with data:3
Destructor with data:2
Destructor with data:1
*/