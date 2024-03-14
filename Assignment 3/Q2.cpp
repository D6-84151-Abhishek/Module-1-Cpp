/*
Q2. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
given, allocate stack of size 5.
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().
*/

#include <iostream>
using namespace std;

class Stack
{
    int size;
    int *stackArr;
    int totalElementsAdded;

public:
    Stack(int size = 5)
    {
        this->size = size;
        stackArr = new int[size];
        totalElementsAdded = 0;
    }
    void push(int value)
    {
        if (this->isFull())
        {
            cout << "Stack full cannot add elements" << endl;
            return;
        }
        stackArr[totalElementsAdded++] = value;
        cout << value << " Added to stack" << endl;
    }
    int pop()
    {
        if (this->isEmpty())
        {
            cout << "Stack empty" << endl;
            return -1;
        }
        return stackArr[--totalElementsAdded];
    }
    int peek()
    {
        if (this->isEmpty())
        {
            cout << "Stack empty" << endl;
            return -1;
        }
        return stackArr[totalElementsAdded];
    }
    bool isEmpty()
    {
        if (totalElementsAdded == 0)
            return true;
        return false;
    }
    bool isFull()
    {
        if (totalElementsAdded >= size)
            return true;
        return false;
    }

    void print()
    {
        if (this->isEmpty())
        {
            cout << "Stack empty" << endl;
            return;
        }
        cout << "Stack elements: " << endl;
        for (int i = 0; i < totalElementsAdded; i++)
            cout << stackArr[i] << ", ";
        cout << endl;
    }
};

int menu()
{
    int choice;
    cout << "\n0. End menu" << endl;
    cout << "1. To push element" << endl;
    cout << "2. To pop element" << endl;
    cout << "3. To peek element" << endl;
    cout << "4. To check if stack is full" << endl;
    cout << "5. To check if stack is empty" << endl;
    cout << "6. To print whole stack" << endl;
    cout << "Choose an option" << endl;
    cin >> choice;
    return choice;
}
int main()
{
    int size;
    cout << "Give size for stack: ";
    cin >> size;
    Stack st(size);
    int choice;

    while (choice = menu())
    {
        switch (choice)
        {
        case 1:
            cout << "Enter a number: ";
            int num;
            cin >> num;
            st.push(num);
            break;
        case 2:
            cout << st.pop() << endl;
            break;

        case 3:
            cout << st.peek() << endl;
            break;

        case 4:
            if (st.isFull())
                cout << "Stack is full" << endl;
            else
                cout << "Stack is not full" << endl;
            break;

        case 5:
            if (st.isEmpty())
                cout << "Stack is empty" << endl;
            else
                cout << "Stack is not empty" << endl;
            break;

        case 6:
            st.print();
            break;

        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }

    cout << "... Thank you" << endl;

    return 0;
}
