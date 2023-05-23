#include <iostream>
using namespace std;

int main()
{
    int* arr = new int[5];

    cout<<"Enter five integers:\n";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    cout<<"Elements in reverse order:\n";
    for(int i = 4; i>=0; i--){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    delete[] arr;
    
    return 0;
}

