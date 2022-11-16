#include <iostream>
using namespace std;
class fruit {
public:
   char ch[50];
   int num ;
   friend class basket;
};
class basket {
public:
   
   
     void getdata(fruit &obj2){
        cout<<"Enter Fruit name:"<<endl;
        cin>>obj2.ch;
        cout<<"Enter Price of fruit:"<<endl;
        cin>>obj2.num;
        
    }
    void showdata(fruit obj2){
        
        cout<<"Fruit is:"<<obj2.ch<<endl;
        cout<<"Price of Fruit is:"<<obj2.num<<endl;
    }
 
};
int main() {
   basket obj1;
   fruit obj2;
   obj1.getdata(obj2);
   obj1.showdata(obj2);
   return 0;
}