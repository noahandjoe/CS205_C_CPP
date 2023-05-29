#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> up1(new int(9));
    cout << "up1's content:" << *up1 << endl;

    unique_ptr<string> up2(new string("Hello C++!"));
    cout << "up2's contents:" << *up2 << endl;

    unique_ptr<string> up3 = make_unique<string>("Hello world!");
    cout << "up3's contents:" << *up3 << endl;

    unique_ptr<int[]> up4 = make_unique<int[]>(5);
    cout << "up4's contents:" << endl;
    for(int i = 0; i<5; i++)
        cout<<up4[i]<<" ";
    cout<<endl;
    
    float* p = new float[3]{1,2,3};
    unique_ptr<float[]> up5(p);
    cout << "up5's contents:" << endl;
    for(int i = 0; i<3; i++)
        cout<<up5[i]<<" ";
    cout<<endl;

    unique_ptr<int> up6 = move(up1);
    cout<<"up6's content:"<<*up6<<endl;

    return 0;
}

/*
up1's content:9
up2's contents:Hello C++!
up3's contents:Hello world!
up4's contents:
0 0 0 0 0 
up5's contents:
1 2 3 
up6's content:9

*/