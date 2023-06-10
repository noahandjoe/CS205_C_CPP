#include <iostream>
#include <limits>

using namespace std;

class RangeError{
    private:
    int iVal;
    
    public:
    RangeError(int _iVal){iVal = _iVal;}
    int getVal(){return iVal;}
};

char to_char(int n){
    if(n<numeric_limits<char>::min() || n>numeric_limits<char>::max())
        throw RangeError(n);

    return (char)n;
}

void gain(int n){
    try{
        char c = to_char(n);
        cout<<n<<" is character "<<c<<endl;
    }catch(RangeError& re){
        cerr<<"Cannot convert "<<re.getVal()<<" to char\n";
        cerr<<"Range is "<<(int)numeric_limits<char>::min();
        cerr<<" to "<<(int)numeric_limits<char>::max()<<endl;
    }
}

int main(){
    gain(65);
    gain(130);

    return 0;
}

/*
65 is character A
Cannot convert 130 to char
Range is -128 to 127

*/