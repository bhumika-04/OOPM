
#include<iostream>

#include<stdlib.h>
using namespace std;
class toll_booth{
    private:
    int total_cars;
    double amount;
    
    public:
    toll_booth(){
        total_cars=0;
        amount=0;
    }
    void paying(){
        total_cars++;
        amount+=50;
        
    }
    void nonpay(){
        total_cars++;
    }
    
    void display(){
        cout<<"Total cars passed by Toll booth is :"<<total_cars<<endl;
        cout<<"Total Amount of Car is :"<<amount<<endl;
        
    }
};

 int main() {
  
  toll_booth t;
  int choice;
  char ch='y';
  
  while(ch='y'){
      
      cout<<"1. Paying "<<endl;
      cout<<"2. Nonpaying "<<endl;
      cout<<"3. Display "<<endl;
      cout<<"4. Exit "<<endl;
      cin>>choice;
      
      switch(choice){
          case 1:
          t.paying();
          break;
          
          case 2:
          t.nonpay();
          break;
          
          case 3:
          t.display();
          break;
          
          case 4:
          exit(0);
          break;
      }
      //cout<<" For continue.....,Press y"<<endl;
      //cin>>ch;
  }
    return 0;
}