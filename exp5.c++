#include <iostream>

using namespace std;
class arun;

class amit{
     int n1;
     public:
      int fun1(){
         cout<<"Enter the saving of Amit:  ";
         cin>>n1;
         
     }
     friend void sumit(amit,arun);
    
};
  class arun{
      int n2;
      public:
      int fun2(){
          
          cout<<"Enter the saving of Arun: ";
          cin>>n2;
      }
      friend void sumit(amit,arun);
  };
      void sumit(amit a1,arun a2 ){
        
          if(a1.n1>a2.n2){
              cout<<" Amit's Saving is Greater than Arun : "<<a1.n1<<endl;
          }
          else{
              cout<< "Arun's Saving is Greater than Amit : "<<a2.n2<<endl;
          }
      }                                 
int main()
{
    amit ob1;
    ob1.fun1();
    
    arun ob2;
    ob2.fun2();
    
    sumit(ob1,ob2);
    

    return 0;
}
