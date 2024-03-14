#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int rollno;
    int marks;

    public :
    void initStudent()
    {
        string name="xyz";
        int rollno=0;
        int marks=0;
        cout<<"Default name of student is:-"<<name<<endl;
        cout<<"Default rollno of student is:-"<<rollno<<endl;
        cout<<"Default marks of student is:-"<<marks<<endl;


    }

    void acceptStudentFromConsole()
    {
        cout<<"Enter Student Name:-"<<endl;
        cin>>name;
        cout<<"Enter Student rollno:-"<<endl;
        cin>>rollno;
        cout<<"Enter Student marks:-"<<endl;
        cin>>marks;

    }

    void printStudentOnConsole()
    {
        acceptStudentFromConsole();
        cout<<" name of student is:-"<<name<<endl;
        cout<<"rollno of student is:-"<<rollno<<endl;
        cout<<" marks of student is:-"<<marks<<endl;
    }
};

int menu()
{
    int choice;
    cout<<"1 for default Student info:-"<<endl;
    cout<<"2 for Enter Student info:-"<<endl;
    cout<<"3 for display Student info :-"<<endl;
    cout<<"4 for Exit :-"<<endl;
    cin>>choice;
    return choice;

}

int main()
{
   Student s1;
   int choice;

   while((choice=menu())!=4)
   {
    switch(choice)
    {
    case 1:
        {
            s1.initStudent();
            break;
        }
        case 2:
        {
            s1.acceptStudentFromConsole();
            break;
        }
 
       case 3:
        {
            s1.printStudentOnConsole();
            break;
        }

         default:
         {
           cout<<"Invalid choice:-"<<endl;
         }
    }
         
   }
   cout<<"Thank you...."<<endl;
   return 0;
}