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
class b{
   public:
    int x;
    public:
    void readdata(){
        cout<<"enter the 2nd number:";
        cin>>x;
    }
    
};
class c:public a,public b{
    public:
    
    
void product(){
        a::x;//1st way
        b::x;
        cout<<"Product of both value is:"<<a::x*b::x;
        
    }
};
  int main(){
    c obj;
    obj.getdata();
    obj.readdata();
    obj.product();

    return 0;
}