#include<iostream>
using namespace std;

class a{
    protected:
    int x;
    void getdata(){
        cout<<"enter the 1st number:";
        cin>>x;
    }
};
class b :protected a{
   protected:
    int y;
    public:
    void readdata(){
        cout<<"enter the 2nd number:";
        cin>>y;
    }
    
};
class c:protected b{
    public:
    
    
void product(){
        
        cout<<"Product of both value is:"<<x*y;
    }
};
  int main(){
    c obj;
   // obj.getdata(); errors
    //obj.readdata();
    obj.product();

    return 0;
}