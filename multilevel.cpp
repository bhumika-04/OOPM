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
class b :public a{
   public:
    int y;
    public:
    void readdata(){
        cout<<"enter the 2nd number:";
        cin>>y;
    }
    
};
class c:public b{
    public:
    
    
void product(){
        
        cout<<"Product of both value is:"<<x*y;
    }
};
  int main(){
    c obj;
    obj.getdata();
    obj.readdata();
    obj.product();

    return 0;
}