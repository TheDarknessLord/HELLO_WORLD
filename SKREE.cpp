#include <iostream>



using namespace std;

class fib
{
    private :
     int x,y,z,c;
    public :
     void init();
     void FIBO(int);
 };
 void fib::init()
 { x=0;c=0;z=0;}
 void fib::FIBO(int y)
 {    
      z=x+y;
      cout<<z;
      x=y;
      y=z;
      if(c==10)
      cout<<"END";
      else
      FIBO(y);
      c=c+1;
 }
       
     
int main()
{ 
    fib obj;
    cout<<"HEloo";
    obj.init();
    obj.FIBO(1);
    return 0;
} 

 