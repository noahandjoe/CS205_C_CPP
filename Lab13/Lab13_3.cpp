#include <iostream>
#include <string>

using namespace std;

template<typename Key, typename Value>
class Dictionary{
    Key* keys;
    Value* values;
    int size;
    int max_size;

    public:
    Dictionary(int initial_size):size(0){
        max_size = 1;
        while(initial_size>=max_size)
            max_size*=2;

        keys = new Key[max_size];
        values = new Value[max_size];
    }

    void add(Key key, Value value){
        Key* tmpKey;
        Value* tmpVal;
        if(size+1 >= max_size){
            max_size*=2;
            tmpKey = new Key[max_size];
            tmpVal = new Value[max_size];

            for(int i=0; i<size; i++){
                tmpKey[i] = keys[i];
                tmpVal[i] = values[i];
            }

            tmpKey[size] = key;
            tmpVal[size] = value;

            delete[] keys;
            delete[] values;

            keys = tmpKey;
            values = tmpVal;
        }else{
            keys[size] = key;
            values[size] = value;
        }

        size++;
    }

    void print(){
        for(int i=0; i<size; i++)
            cout<<"{"<<keys[i]<<", "<<values[i]<<"}"<<endl;
    }

    ~Dictionary(){
        delete[] keys;
        delete[] values;
    }

};

int main(){
    Dictionary<const char*, const char*> dict(10);
    dict.print();
    dict.add("apple", "fruit");
    dict.add("banana", "fruit");
    dict.add("dog", "animal");
    dict.print();

    Dictionary<int, const char*> dict_specialized(10);
    dict_specialized.print();
    dict_specialized.add(100, "apple");
    dict_specialized.add(101, "banana");
    dict_specialized.add(103, "dog");
    dict_specialized.add(89, "cat");
    dict_specialized.print();

    return 0;
}

/*
{apple, fruit}
{banana, fruit}
{dog, animal}
{100, apple}
{101, banana}
{103, dog}
{89, cat}
*/