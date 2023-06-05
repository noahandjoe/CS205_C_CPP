class Base
{
private:
    int x;
protected:
    int y;
public:
    int z;
    void funBase(Base& b)
    {
        ++x;  
        ++y;
        ++z;
        //++b.x;  // 错误: 私有成员 x 无法在类外部直接访问
        ++b.y;
        ++b.z;
    }
};

class Derived : public Base
{
public:
    void funDerived(Base& b, Derived& d)
    {
        //++x;  // 错误: 私有成员 x 无法在派生类中直接访问
        ++y;
        ++z;
        //++b.x;  // 错误: 私有成员 x 无法在类外部直接访问
        // ++b.y;  // 错误: 受保护的 成员 "Base::y" 不能通过 "Base" 指针或对象访问
        ++b.z;
        //++d.x;  // 错误: 私有成员 x 无法在类外部直接访问
        ++d.y;
        ++d.z;
    }
};

void fun(Base& b, Derived& d)
{
    //++x;  // 错误: x 是类的成员变量，需要通过对象访问
    //++y;  // 错误: y 是受保护成员，在类外部无法直接访问
    ++b.z;
    //++d.x;  // 错误: x 是类的私有成员，在类外部无法直接访问
    //++d.y;  // 错误: y 是类的受保护成员，在类外部无法直接访问
    ++d.z;
}
