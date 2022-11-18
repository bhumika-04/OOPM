#include<iostream>
using namespace std;

class a{
    public:
    int x;
    void getdata(){
        cout<<"enter the 1st number:";
        cin>>x;
    }
};
class b: public a{
   public:
    int y;
    public:
    void readdata(){
        cout<<"enter the 2nd number:";
        cin>>y;
    }
    
};
class c{
    public:
    int z;
     void readdata1(){
        cout<<"enter the 3rd number:";
        cin>>z;
    }

};
class d:public b,public c{
    public:
void product(){
        
        cout<<"Product of value is:"<<x*y*z;
    }
};
  int main(){
    d obj;
    obj.getdata();
    obj.readdata();
    obj.readdata1();
    obj.product();

    return 0;
}