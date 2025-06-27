#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class MyVector
{
private:
    T *data;
    size_t _size;
    size_t _capacity;

    void resize()
    {
        size_t new_capacity;
        if (_capacity == 0)
        {
            new_capacity = 1;
        }
        else
        {
            new_capacity = _capacity * 2;
        }
        T *newData = new T[new_capacity];
        for (int i = 0; i < _capacity; i++)
        {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        _capacity = new_capacity;
    }

public:
    MyVector() : data(nullptr), _size(0), _capacity(0)
    {
    }

    ~MyVector()
    {
        delete[] data;
    }

    void push_back(const T &value)
    {
        if (_size == _capacity)
        {
            resize();
        }
        data[_size++] = value;
    }

    // Leaves the object logically "removed", though the data still sits there physically
    // 10, 20, 30
    // pop_bck()
    // logically: 10, 20 and physically: 10, 20, [30]
    // _size = 2
    // when we push are pushing at pos 2: hence 10, 20, newdata, [30]
    // and _size = 3
    void pop_back()
    {
        if (_size > 0)
        {
            _size--;
        }
    }

    size_t size() const
    {
        return _size;
    }

    size_t capacity() const
    {
        return _capacity;
    }

    bool empty()
    {
        return _size == 0;
    }

    // Array indices and sizes can never be negative.
    // Using size_t prevents bugs related to negative indices.

    //& ->Returns a reference to the actual element in the array.
    T &operator[](size_t index)
    {
        if (index >= _size)
            throw out_of_range("Index out of range");
        return data[index];
    }

    const T &operator[](size_t index) const
    {
        if (index >= _size)
            throw out_of_range("Index out of range");
        return data[index];
    }
};

int main()
{
    MyVector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    vec.pop_back();
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
}
