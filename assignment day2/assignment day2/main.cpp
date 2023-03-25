#include <iostream>
using namespace std;
class fraction{

  private:
      int numerator;
      int demerator;


 public:
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

   }
   fraction(int n){
      numerator=n;
      demerator=1;

   }
   fraction(int n,int d){
     numerator=n;
     demerator=d;
   }

};

int main()
{
    fraction f1(1,2);
    fraction f2(2,4),f3;
    f3=f1.addfraction(f2);
    f3.display();

    return 0;
}
