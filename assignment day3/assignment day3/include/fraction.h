#ifndef FRACTION_H
#define FRACTION_H
#include<iostream>
using namespace std;

class fraction
{
 public:
     int numerator;
      int demerator;
      int *value;
      void setnumerator(int n)
      {
        numerator=n;
      }
      void setdemerator(int d)
      {
       demerator=d;
      }
      int getnumerator()
      {
         return numerator;
      }
      int getdemerator()
      {
         return demerator;
      }
      void display()
      {
        cout<<numerator<<"/"<<demerator<<"\n";
      }
      fraction addfraction(fraction f2)
      {
          fraction ans;
          ans.numerator=numerator*f2.demerator+f2.numerator*demerator;
          ans.demerator=demerator*f2.demerator;
          return ans;
      }
   fraction(){
      numerator=1;
      demerator=1;
value=new int[10];
   }
   fraction(int n){
      numerator=n;
      demerator=1;
value=new int[10];
   }
   fraction(int n,int d){
     numerator=n;
     demerator=d;
     value=new int[10];
   }

  fraction operator+(fraction f){
        fraction ans;
          ans.numerator=numerator*f.demerator+f.numerator*demerator;
          ans.demerator=demerator*f.demerator;
          return ans;
}
 fraction operator-(fraction f){
 fraction ans;
          ans.numerator=numerator*f.demerator-f.numerator*demerator;
          ans.demerator=demerator*f.demerator;
          return ans;
}

fraction operator=(fraction f){
    this->numerator=f.numerator;
    this->demerator=f.demerator;
    this->value=new int[10];

    for (int index=0;index<10;index++)
    {
        this->value[index]=f.value[index];

    }
 }

};


#endif // FRACTION_H
