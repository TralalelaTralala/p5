#include <iostream>

using namespace std;

template <class T>
class SearchArray
{
private:
    T* arr;
    int size;

public:
    SearchArray(T a[], int n)
    {
        size = n;
        arr = new T[size];

        for (int i = 0; i < size; i++)
            arr[i] = a[i];
    }

    ~SearchArray()
    {
        delete[] arr;
    }

    void search(T key)
    {
        bool found = false;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == key)
            {
                cout << "Елемент знайдено: "
                     << arr[i]
                     << endl;
                found = true;
            }
        }

        if (!found)
            cout << "Елемент не знайдено" << endl;
    }
};

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    double b[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    SearchArray<int> obj1(a, 5);
    SearchArray<double> obj2(b, 5);

    obj1.search(30);
    obj2.search(4.4);

    return 0;
}