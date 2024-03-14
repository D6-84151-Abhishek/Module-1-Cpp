/*Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.*/

#include<iostream>
using namespace std;

class Time
{
   private:
   int hour;
   int min;
   int sec;

   public:

   //parameterless constructor
   Time()
   {
    hour=0;
    min=0;
    sec=0;
   }
   //Parameterized constructor
   Time(int h,int m,int s)
   {
    hour=h;
    min=m;
    sec=s;
   }

   //get functions
   int gethour()
   {
    return hour;
   }

   int getmin()
   {
    return min;
   }

   int getsec()
   {
    return sec;
   }

   //display
   void printTime()
   {
    cout<<"Time is : "<<hour<<"hr"<<":"<<min<<"min"<<":"<<sec<<"sec"<<endl;
   }

   //set functions
   void sethour(int hr)
   {
    hour=hr;
   }

    void setmin(int mn)
   {
    hour=mn;
   }

    void setsec(int se)
   {
    hour=se;
   }


};

int main()
{
   

   Time *arr = new Time[1] {Time(02,05,30)};

   for(int i=0; i<1;i++)
   {
    arr[i].printTime();
   }
   
  delete[] arr;

  
    return 0;
}