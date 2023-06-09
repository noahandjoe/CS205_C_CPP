#include <iostream>
using namespace std;

template<typename T>
class Bag{
    T* elem;
    int size;
    int max_size;

    public:
    Bag():elem(0),size(0),max_size(1){}
    void add(T t){
        T* tmp;
        if(size+1 >= max_size){
            max_size*=2;
            tmp=new T[max_size];
            for(int i=0; i<size; i++){
                tmp[i] = elem[i];
            }
            tmp[size++] = t;
            delete[] elem;
            elem = tmp;
        }else
            elem[size++] = t;
    }
    void print(){
        for(int i=0; i<size; i++)
            cout<<elem[i]<<" ";
        cout<<endl;
    }
};

template<typename T>
class Bag<T*>{
    T* elem;
    int size;
    int max_size;

    public:
    Bag():elem(0),size(0),max_size(1){}
    void add(T* t){
        T* tmp;
        if(t==NULL){
            cout<<"NUll pointer!"<<endl;
            return;
        }
        if(size+1 >= max_size){
            max_size*=2;
            tmp=new T[max_size];
            for(int i=0; i<size; i++){
                tmp[i] = elem[i];
            }
            tmp[size++] = *t;
            delete[] elem;
            elem = tmp;
        }else
            elem[size++] = *t;
    }
    void print(){
        for(int i=0; i<size; i++)
            cout<<elem[i]<<" ";
        cout<<endl;
    }
};
