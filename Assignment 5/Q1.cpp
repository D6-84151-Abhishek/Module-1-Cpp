#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class Date
{
  private:
  int day;
  int month;
  int year;

  public:

  //parameterless constructor
  Date()
  {
    day=1;
    month=1;
    year=2000;
  }
    //parameterized constructor
   Date(int day,int month,int year)
   {
    this->day=day;
    this->month=month;
    this->year=year;
   }

   //get function
   int get_day()
   {
    return day;
   }

   //set day function
   void set_day(int d)
   {
    day=d;
   }

   //get month fun
   int get_month()
   {
    return month;
   }

   //set month fun
   void set_month(int m)
   {
    month=m;
   }

   //get year fun
   int get_year()
   {
    return year;
   }

   //set year fun
   void set_year(int y)
   {
    year=y;
   }

   //accept fun
   void acceptDate()
   {
    cout<<"Enter day : "<<endl;
    cin>>day;
    cout<<"Enter month : "<<endl;
    cin>>month;
    cout<<"Enter year : "<<endl;
    cin>>year;
   }

   //display fun
   void displayDate()
   {
    cout<<"Date is : "<<day<<"/"<<month<<"/"<<year<<endl;
   }

   //checking leap year 
   bool is_leap_year()
   {
     if(year%4==0&&year%100!=0||year%4==0)
     {
      cout<<"it is leap year"<<endl;
      return true;
     }
     else
      cout<<"it is not leap year"<<endl;
      return false;
   }

};

class Person
{
  protected:
  string name;
  string addr;
  Date birth_day;

  public:
  //parameterless constructor
  Person()
  {
    name="******";
    addr="******";
  }

  Person(string name,string addr)
  {
    this->name=name;
    this->addr=addr;
  }
  
  //parameterized constructor
  Person(string name,string addr,int day,int month,int year):birth_day(day,month,year )
  {
    this->name=name;
    this->addr=addr;
  }

  //get fun
  string get_name(string name)
  {
    
    return name;
  }

  //set name fun
  void set_name()
  {
   
  }

  //get aadr fun
  string get_addr()
  {
   
   return addr;
  }

  //set address fun
  void set_addr(string addr)
  {
    this->addr;
  }

  //get birth date fun
  Date get_birth_date()
  {
    return birth_day;
  }
  
  //set function
  void set_birth_date()
  {
    
  }

  //accept fun
  void acceptPerson()
  {
    cout<<"Enter name : "<<endl;
    cin>>name;
    cout<<"Enter address : "<<endl;
    cin>>addr;
    cout<<"Enter birth date"<<endl;
    birth_day.acceptDate();
  }

  //Display fun
  void displayPerson()
  {
    cout<<"Name is : "<<name<<endl;
    cout<<"Address is : "<<addr<<endl;
    cout<<"Birth";
    birth_day.displayDate();
  }
};

class Employee: public Person
{
  private:
  int id;
  float sal;
  string dept;
  Date joining_date;
  

  public:

  //parameterless constructor
  Employee()
  {
    id=0;
    sal=0.0;
    dept="******";
  } 

  //parameterized constructor without birth date
  Employee(string name,string addr,int id,float sal,string dept,int day,int month,int year):joining_date(day,month,year),Person(name,addr)
  {
    this->id=id;
    this->sal=sal;
    this->dept=dept;
  }
//parameterized constructor with birth date
  Employee(string name,string addr,int bday,int bmon,int byear,int id,float sal,string dept,int day,int month,int year):joining_date(day,month,year),Person(name,addr,bday,bmon,byear)
    {
    this->id=id;
    this->sal=sal;
    this->dept=dept;
  }

  //get function
  int get_id()
  {
   
    return id;
  }

  //set function
  void set_id(int id)
  {
    this->id=id;
  }

  //get salary fun
  float get_sal()
  {
    return sal;
  }

  //set salary fun
  void set_sal(float sal)
  {
   this->sal=sal;
  }

  //get dept function
  string get_dept()
  {
    return dept;
  }

  //set dept function
  void set_dept(string dept)
  {
   this->dept=dept;
  }

  //gate joing date fun
  void get_joining_date()
  {
    cout<<"Joining "<<endl;
    joining_date.displayDate();
  }

  //set joining date fun
  void set_joining_date()
  {
    cout<<"New joining date is : "<<endl;
    joining_date.acceptDate();
  }

  Date get_birth_date()
  {
   
    birth_day.displayDate();
    return birth_day;
  }

  //void set_birth_date(Date birth_day.acceptDate())
  //{
    
  //}

  

  // accept function
  void acceptEmployee()
  {
    cout<<"Enter name of employee : "<<endl;
    cin>>name;
    cout<<"Enter address of employee : "<<endl;
    cin>>addr;
    cout<<"Enter id"<<endl;
    cin>>id;
    cout<<"Enter sal"<<endl;
    cin>>sal;
    cout<<"Enter dept"<<endl;
    cin>>dept;
    cout<<"Enter joining date"<<endl;
    joining_date.acceptDate();
    cout<<"Enter birth date "<<endl;
    birth_day.acceptDate();
  }

  void displayEmployee()
  {
    cout<<"Name of employee is : "<<name<<endl;
    cout<<"Address of employee is : "<<addr<<endl;
    cout<<"id is : "<<id<<endl;
    cout<<"Salary is : "<<sal<<endl;
    cout<<"Department is : "<<dept<<endl;
    cout<<"joining ";
    joining_date.displayDate();
    cout<<"Birth ";
    birth_day.displayDate();


  }


};


int main()
{
   // Person p1;
    //p1.acceptPerson();
    //p1.displayPerson();
   

     Employee e1;
    e1.acceptEmployee();
    cout<<"endl";
    e1.displayEmployee();
    cout<<endl;
   

  

}