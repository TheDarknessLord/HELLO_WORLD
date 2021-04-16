#include <iostream>
#include <stdlib.h>


using namespace std;

class fib
{
    private :
     int x,y,z,c,n;
    public :
     void init(int);
     void FIBO(int);
 };
 void fib::init(int n1)//THis is to initialise n(THE COUNTER)
 { x=0;c=0;z=0;n=n1;}
 void fib::FIBO(int y)
 {    
      z=x+y;
      cout<<z<<endl;
      x=y;
      y=z;
      if(c==(n-1))
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
    int n1;
	fib obj;
    cout<<"HEloo"<<endl;
    cout<<"ENTER THE NUMBER OF FIBO TERMS THAT YOU WANT:-"<<endl;
    cin>>n1;
    obj.init(n1);
    obj.FIBO(1);
    return 0;
} 
