#include<iostream>
using namespace std;

class Tollbooth
{
    private:
    int totalcars;
    double totalamount;

    public:
    
    //parameterless constructor
    Tollbooth()
    {
         totalcars=0;
         totalamount=0;
    }
    
    //Function to count payingcars and totalamount
   void payingCar()
    {
       totalcars++;
       totalamount+=0.50;
    }

   //Function to count nonpaying cars
   void noPayingCar()
   {
       totalcars++;
       totalamount+=0;
   }
   
   //Function to display
   void display()
   {
     cout<<"Total cars are : "<<totalcars<<endl;  
     cout<<"Total amount is : "<<totalamount<<endl;
     cout<<"Total paying cars are : "<<totalamount*2<<endl;
     cout<<"Total non paying cars are : "<<totalcars-(totalamount*2)<<endl;
     
   }


};

int main()
{
     //created object of class Tollbooth
    Tollbooth t1;

    
    int choice;

    do
    {
       cout<<"0 for exit : "<<endl;
       cout<<"1 for paying cars : "<<endl;
       cout<<"2 for nonpaying cars : "<<endl;
       cout<<"Enter the choice : "<<endl;
       cin>>choice;
    
      switch(choice)
      {
        case 0:  
                 cout<<"Result is.."<<endl; 
                 break;

        case 1:   
                //Calling function with the help of object 
                 t1.payingCar();
                 break;

        case 2:
                //Calling function with the help of object 
                 t1.noPayingCar();
                cout<<"Thank You "<<endl;  
                
                 break; 

        default:
               cout<<"Invalid choice "<<endl; 
               

               break;               
      }

    } while (choice!=0);
    
    //calling function inside of class tollbooth with help of object t1
    t1.display();
    return 0;
}