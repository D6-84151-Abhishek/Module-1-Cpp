#include<iostream>
using namespace std;

class Employee
{
   protected:
      int id;
      float sal;

    public:
    //parameterless constructor
    Employee()
    {
        cout<<"inside employee parameterless constructor"<<endl;
        id=0;
        sal=0.0;
    }  

    //parameterized constructor
    Employee(int id,float sal)
    {
        this->id=id;
        this->sal=sal;
    }

    //get fun
    int get_id()
    {
        return id;
    }

    //set fun
    void set_id(int id)
    {
        this->id=id;
    }

    float get_sal()
    {
        return sal;
    }

    void set_sal(float sal)
    {
        this->sal=sal;
    }

    //accept fun
    virtual void acceptData()
    {
        cout<<"Enter id : ";
        cin>>id;
        cout<<"Enter salary : ";
        cin>>sal;
    }

    //display fun
    virtual void displayData()
    {
        cout<<"Id is :"<<id<<endl;
        cout<<"Salary is :"<<sal<<endl;
    }

    virtual ~Employee()
    {
      cout<<"in employee dest"<<endl;
    }
};

class Manager:virtual public Employee
{
  protected:
    float bonus;

   protected:
     void acceptBonus()
     {
        cout<<"Enter Bonus :";
        cin>>bonus;
     }  

     void displayBonus()
     {
        cout<<"Bonus is :"<<bonus<<endl;
     }  

  public:
     //parameterless constructor
      Manager()
      {
        cout<<"inside manager parameterless constructor"<<endl;
        bonus=0.0;
      }
     
     //parameterized constructor
     Manager(int id,float sal,float bonus)
     {
        this->id=id;
        this->sal=sal;
        this->bonus=bonus;
     }

      float get_bonus()
    {
        return bonus;
    }

    void set_bonus(float bonus)
    {
        this->bonus=bonus;
    }

    //accept fun
     void acceptData()
    {
        Employee::acceptData();
        acceptBonus();
    }

    //display fun
     void displayData()
    {
        Employee::displayData();
        displayBonus();
    }

    ~Manager()
    {
      cout<<"in manager dest"<<endl;
    }
};

class Salesman: virtual public Employee
{
    private:
      float commi;

    protected:
     void acceptCommi()
     {
        cout<<"Enter commision :";
        cin>>commi;
     }  

     void displayCommi()
     {
        cout<<"Commision is :"<<commi<<endl;
     }

    public:
      Salesman()
      {
        cout<<"inside salesman parameterless constructor"<<endl;
        commi=0.0;
      } 

      Salesman(int id,float sal,float commi)
      {
        this->id=id;
        this->sal=sal;
        this->commi=commi;
      }

      float get_commi()
    {
        return commi;
    }

     void set_commi(float commi)
    {
        this->commi=commi;
    }

    //accept fun
    void acceptData()
    {
        Employee::acceptData();
        acceptCommi();
    } 

     //display fun
     void displayData()
    {
        Employee::displayData();
        displayCommi();
    }

    ~Salesman()
    {
      cout<<"in salesman dest"<<endl;
    }
    
};

class Sales_manager:public Manager,public Salesman
{
    public:
  Sales_manager()
  {
    cout<<"inside salesmanager "<<endl;
  }

  /*Sales_manager(int id,float sal,float bonus,float commi)
  {
    this->id=id;
    this->sal=sal;
    this->bonus=bonus;
    this->commi=commi;
  }*/

  void acceptData()
  {
    Employee::acceptData();
    acceptBonus();
    acceptCommi();
  }

  void displayData()
  {
   Employee::displayData();
   displayBonus();
   displayCommi();
  }

  ~Sales_manager()
    {
      cout<<"in salesmanager dest"<<endl;
    }
  
};

int main()
{
   // Sales_manager s1;
    //s1.acceptData();
    //s1.displayData();
    //return 0;
    //Employee *eptr= new Sales_manager();
   Employee *eptr= new Sales_manager();
    //Employee *eptr= new Manager();
    //Employee *eptr= new Employee();
    eptr->acceptData();
    eptr->displayData();

    delete eptr;
    eptr = NULL;

    return 0;
}
