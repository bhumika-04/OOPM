//WAP to declare variable x in the base class and define
 //getdata() method which is use for read 
//the value of x ,define 1 derived class 
//where variable y is private to create two method
 //for derived class
 //one is read data and other is product to read
 // the value of y inside the read method
 //and calculate the method of base class and derived class method 
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
    private:
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
    obj.getdata();
    obj.readdata();
    obj.product();

    return 0;
}