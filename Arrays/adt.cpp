#include <iostream>
using namespace std;

class list
{

private:
    int size;
    int *arr = nullptr;
    int currindex;
    bool check_pass;

public:
    list()
    {
    }
    list(int size);
    void insertion(int element);
    void print_array();
    void delete_element(int index);
};

list::list(int size)
{
    if (size > 0)
    {
        this->size = size;
        currindex = 0;
        arr = new int[this->size];
        check_pass = true;
    }
    else
    {
        check_pass = false;
        cout << "Cannot initialize array with size 0" << endl;
    }
}

void list::insertion(int element)
{
    if (check_pass)
    {
        if (currindex < this->size)
        {
            arr[currindex] = element;
            cout << "Element inserted: " << element << endl;
            currindex++;
            return;
        }
        else
        {
            cout << "Cannot insert more elements size limit reached" << endl;
            return;
        }
    }
    else
    {
        cout << "Invalid operation" << endl;
    }
}

void list::delete_element(int index)
{
    int i = 0;
    for (i = index; i < currindex; i++)
    {
        arr[i] = arr[i + 1];
    }
    if (i == currindex)
    {
        currindex--;
        cout << "Deleted element at index :" << index << endl;
        cout << "Current Size of Array is: " << currindex << endl;
    }
}

void list::print_array()
{
    for (int i = 0; i < currindex; i++)
        cout << arr[i] << " ";
}

int main()
{

    list arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr.insertion(i);
    }
    cout << endl;
    arr.delete_element(0);
    arr.print_array();
    arr.insertion(10);
    arr.print_array();
    arr.insertion(11);

    return 0;
}