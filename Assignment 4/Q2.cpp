/*
Q2. Write a menu driven program for Student management.
In main(), create Array of Objects and provide facility for accept, print, search and sort.
For student accept name, gender, rollNumber and marks of three subjects from user and print name,
rollNumber, gender and percentage.
Provide global functions void sortRecords(Studuent[] arr) and int searchRecords(Student[] arr) for
sorting and searching array.
Search function returns index of found Student, otherwise returns -1.
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    string gender;
    int rollNo;
    double percent;

public:
    // Constructors
    Student()
    {
        this->name = "";
        this->gender = "";
        this->rollNo = 0;
        this->percent = 50.00;
    }
    Student(string name, string gender, int rollNo, double m1, double m2, double m3)
    {
        this->name = name;
        this->gender = gender;
        this->rollNo = rollNo;
        this->percent = (m1 + m2 + m3) / 3.00;
    }

    // Getters
    string getName()
    {
        return name;
    }

    int getRollNo()
    {
        return rollNo;
    }

    // Accept Student records from console
    void acceptStudent()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter gender: ";
        getline(cin, gender);
        cout << "Enter Roll number: ";
        cin >> rollNo;
        cout << "Enter marks in 3 Subjects out off 100: ";
        double sub1, sub2, sub3;
        cin >> sub1;
        cin >> sub2;
        cin >> sub3;
        percent = (sub1 + sub2 + sub3) / 3.00;
    }

    // Display Student records on console
    void printStudent()
    {
        cout << "\nName: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Roll no.: " << rollNo << endl;
        cout << "Percentage: " << percent << "%"
             << "\n"
             << endl;
    }
};

// Search Student by name
int searchStudent(Student *arr[], int size, string name)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]->getName().compare(name) == 0)
            return i;
    }
    return -1;
}

// Search Student by roll no.
int searchStudent(Student *arr[], int size, int rollNo)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]->getRollNo() == rollNo)
            return i;
    }
    return -1;
}

// Swap Students in an Array
void swapStudent(Student *arr[], int i, int j)
{
    Student *temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Sort Student records by roll no.
void sortStudents(Student *arr[], int size)
{
    if (size == 0)
        cout << "Records empty" << endl;
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j]->getRollNo() < arr[minIndex]->getRollNo())
                minIndex = j;
        }
        if (minIndex != i)
            swapStudent(arr, i, minIndex);
    }
}

// Menu
int menu()
{
    int choice;
    cout << "0. End menu" << endl;
    cout << "1. To add student" << endl;
    cout << "2. To display all student" << endl;
    cout << "3. To search student by name" << endl;
    cout << "4. To search student by roll no." << endl;
    cout << "5. To sort student records" << endl;
    cout << "Choose an option" << endl;
    cin >> choice;
    cin.ignore();
    return choice;
}

int main()
{
    int size;
    cout << "Enter number of student records to be added: ";
    cin >> size;

    Student *arr[size];
    int choice;
    int totalStu = 0, index = 0;
    string name;
    int rollNo;
    while (choice = menu())
    {
        switch (choice)
        {
        case 1:
            if (totalStu < size)
            {

                arr[totalStu] = new Student;
                arr[totalStu++]->acceptStudent();
            }
            else
                cout << "Records full" << endl;
            break;
        case 2:
            for (int i = 0; i < totalStu; i++)
                arr[i]->printStudent();
            break;
        case 3:
            cout << "Enter Name: ";
            getline(cin, name);
            index = searchStudent(arr, totalStu, name);
            if (index != -1)
                arr[index]->printStudent();
            else
                cout << "Student does not exist" << endl;
            break;
        case 4:
            cout << "Enter Roll no.: ";
            cin >> rollNo;
            index = searchStudent(arr, totalStu, rollNo);
            if (index != -1)
                arr[index]->printStudent();
            else
                cout << "Student does not exist" << endl;
            break;
        case 5:
            sortStudents(arr, totalStu);
            for (int i = 0; i < totalStu; i++)
                arr[i]->printStudent();
            break;

        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }
    for (int i = 0; i < totalStu; i++)
    {
        delete arr[i];
    }
    cout << "... Thank you" << endl;
}
