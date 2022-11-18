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
    int y;
    public:
    void getdata(){
        cout<<"enter the 2nd number:";
        cin>>y;
    }
    
};
class c:public a,public b{
    public:
    
    
void getdata(){
       a::getdata();//1st way
       b::getdata();
        cout<<"Product of both value is:"<<x*y;
    }
};
  int main(){
    c obj;
    //obj.a::getdata();//2nd way
    //obj.b::getdata();
    obj.getdata();

    return 0;
}