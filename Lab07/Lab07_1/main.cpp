#include "match.h"
#include <iostream>
using namespace std;

int main(){
    cout<<"Please input a string:";
    string str;
    getline(cin, str);
    const char* cstr = str.c_str();
    cout<<"Please input a character:";
    char c = getchar();
    cout<<match(cstr, c)<<endl;
    return 0;
}

/*
g++ -shared -fPIC -o libmatch.so match.cpp
g++ main.cpp -L. -lmatch 

./a.out: error while loading shared libraries: libmatch.so: cannot open shared object file: No such file or directory
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
*/