#include <iostream>
#include <exception>
using namespace std;

template <typename T>
class List {
    T* arr;
    int size;
    int length;

public:

    List() {
        size = 1;
        length = 0;
        arr = new T[size];
    }

    T getLast() { 

        if (length == 0) {
            throw "List is empty";
        }

        return arr[length - 1];

    }

    T getbylndex(int index) {

        if (index >= length || index < 0) {
            throw "Index out of bounds";
        }

        return arr[index];

    }

    void Add(T item) {

        if (length == size) {  
            Extend();  
        }

        arr[length] = item;                                                                                                                            length++; // Increase the length by 1.   

    }

    void Display() {   
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }      
    cout << endl;
    }
    T Remove(int index) { 
    if (index >= length || index < 0)
    {
        throw "Index out of bounds";
    }
    T x = arr[index];
    for (int i = index + 1 ; i < length ; i++)
    {
        arr[i - 1] = arr[i];  
    } 
    length--;
    return x;
    }
    void Extend()
    {
       size *= 2;
       T *new_arr = new T[size];
       for (int i = 0 ; i < length ; i++)
       {
           new_arr[i] = arr[i];
       }
       delete []arr;
       arr = new_arr;
    }
};

int main() {
    List <int> lst;
    lst.Add(10);
    lst.Add(20);
    lst.Add(30);
    lst.Add(40);
    lst.Display();
    cout << "Last Element : " << lst.getLast() << endl;
    cout << "Element at Index 1 : " << lst.getbylndex(2) << endl;
    lst.Remove(1);
    lst.Display();
    return 0;
}