#include<iostream>


using namespace std;

class Complex{
    public:
   int real,img;

    Complex(int x1,int y1){
        real=x1;
        img=y1;
              
    }
    void add(Complex obj1,Complex obj2){
        cout<<"Complex Number is:"<<obj1.real+obj2.real<<" "<<obj1.img+obj2.img<<"i"<<endl;


    }
};
 int main(){
    int x,y,x1,y1;
     cout<<"Enter 1st  real and imaginary part of Complex Number:"<<endl;
        cin>>x>>y;
     cout<<"Enter 2nd real and imaginary part of Complex Number:"<<endl;
         cin>>x1>>y1;
       Complex obj1(x,y),obj2(x1,y1);
       obj1.add(obj1,obj2);
         return 0;   
 }