#include <iostream>
using namespace std;

#define MAXSIZE 5

template<typename T>
class Matrix{
    private:
    T matrix[MAXSIZE];
    size_t size;

    public:
    Matrix();
    void printMatrix();
    void setMatrix(T[]);
    void addMatrix(T[]);
};

template<typename T>
Matrix<T>::Matrix():size(MAXSIZE){}

template<typename T>
void Matrix<T>::setMatrix(T array[]){
    for(size_t i = 0; i<size; i++)
        matrix[i] = array[i];
}

template<typename T>
void Matrix<T>::printMatrix(){
    for(size_t i = 0; i<size; i++)
        cout<<matrix[i]<<" ";
    cout<<endl;
}

template<typename T>
void Matrix<T>::addMatrix(T otherArray[]){
    for(size_t i = 0; i<size; i++)
        matrix[i] += otherArray[i];
}

int main(){
    int a[MAXSIZE]{1,2,3,4,5};
    Matrix<int> m;
    m.setMatrix(a);
    m.printMatrix();

    return 0;
}

//1 2 3 4 5 