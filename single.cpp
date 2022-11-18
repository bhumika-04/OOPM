#include<iostream>
using namespace std;

class area{
    public:
    float pi=3.14 ,r;
    //pi=3.14;//error
    area(){
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Area of Circle is :"<<2*pi*r*r<<endl;

    }
    area(float a){
        
        cout<<"Area of Square is :"<<a*a<<endl;
    }
    area(float l,float b){
     
        cout<<"Area of Rectangle is :"<<l*b;
    }
};


int main(){
    area obj1;
    float s,d,f;
     cout<<"Enter side of Square:";
        cin>>s;
    area obj2(s);
    cout<<"enter lenght and breadth of Rectangle:";
        cin>>d>>f;
     area obj3(d,f);
    return 0;
}
