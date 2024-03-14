#include<iostream>
using namespace std;
 class Box
 {
  private:  
    double length;
    double width;
    double height;

  public:

//parameterless constructor
Box (){
  length=1;
  width=1;
  height=1;
  //cout<<"Default value of the box is :"<<length<<";  "<<width<<"; "<<height<<endl;
  //cout<<"Volume of the box is : "<<length*width*height<<endl;
}


  //parameterized constructor
  Box(double length,double width, double height)
  {
    this->length=length;
    this->width=width;
    this->height=height;
  }

   //function for accept 
  void acceptDimensionOfTheBox()
  {
    cout<<"Enter the length :-"<<endl;
    cin>>length;
    cout<<"Enter the width :-"<<endl;
    cin>>width;
    cout<<"Enter the height :-"<<endl;
    cin>>height;
  }

  //function for display
  void displayVolume()
  {

    cout<<"Volume of the box is:-  "<<length*width*height<<endl;
  }
 
 
 };

   int menu()
  {
    int choice;
    cout<<"1 Default dimensions & volume of the box :"<<endl;
    cout<<"2 Accept dimensions of the box :"<<endl;
    cout<<"3 Display volume : "<<endl;
    cout<<"0 Exit  "<<endl;
    cout<<"Enter the choice "<<endl;
    cin>>choice;
    return choice;
  }

 int main()
 {
   //created object of class Box
    Box b1;
   
   int choice;
   
   while((choice=menu())!=0)
   {
    switch( choice)
    {
      case 1: Box ();
        
        break;

        case 2:  b1.acceptDimensionOfTheBox();
      
        break;

        case 3:  b1.displayVolume();
        break;

        default:
        cout<<"Invalid choice"<<endl;
        break;
    }
   
   }
     
     cout<<"Thank you..."<<endl;
    
    return 0;
 }