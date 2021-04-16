#include <iostream>
#include <stdlib.h>


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
      cout<<z<<endl;
      x=y;
      y=z;
      if(c==10)
      {
	  cout<<"END";
      exit(0);
	  }
	  else
     { c=c+1;
	   FIBO(y);
      
	  }
 }
       
     
int main()
{ 
    fib obj;
    cout<<"HEloo"<<endl;
    obj.init();
    obj.FIBO(1);
    return 0;
} 
