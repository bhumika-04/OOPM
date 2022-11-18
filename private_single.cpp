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
class b :private a{
    public:
    int y;
    public:
    void readdata(){
        cout<<"enter the 2nd number:";
        cin>>y;
    }
    void product(){
        int sum;
        sum=x*y;
        cout<<"Product of both value is:"<<sum;
    }
};

  int main(){
    b obj;
    //obj.getdata();//error because we declare a private
    obj.readdata();
    obj.product();

    return 0;
}