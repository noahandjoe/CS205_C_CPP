#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Matrix
{
private:
    int rows;
    int cols;
    shared_ptr<vector<float>> data;

public:
    Matrix(int rows, int cols)
        : rows(rows), cols(cols),
          data(make_shared<vector<float>>(rows * cols)) {}
    // copy constructor
    Matrix(const Matrix &other)
        : rows(other.rows), cols(other.cols), data(other.data) {}
    // copy assignment operator
    Matrix &operator=(const Matrix &other)
    {
        if (this != &other)
        {
            rows = other.rows;
            cols = other.cols;
            data = other.data;
        }
        return *this;
    }

    // addition operator
    Matrix operator+(const Matrix &other) const
    {
        if (rows != other.rows || cols != other.cols)
        {
            throw runtime_error("Matrix dimensions mismatch");
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows * cols; i++)
        {
            result.data->at(i) = data->at(i) + other.data->at(i);
        }
        return result;
    }
};

int main(){
    Matrix a(3,4);
    Matrix b(3,4);
    Matrix c = a+b;
    Matrix d = a;
    d = b;

    return 0;
}