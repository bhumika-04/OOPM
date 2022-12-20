

#include<iostream>
using namespace std;

class student{
    public:
    char name[50];
    int rollno;
    void getdata(){
        cout<<"Enter the Name:"<<endl;
        cin>>name;
         cout<<"Enter the Roll Number:"<<endl;
        cin>>rollno;
    }
};
class exam :public student{
   public:
    int eee,dis,dsa,dgs,oopm,java;
    
    
    void readdata(){
        cout<<"Enter marks obtain in EEE:";
        cin>>eee;
        cout<<"Enter marks obtain in DIS :";
        cin>>dis;
        cout<<"Enter marks obtain in DSA :";
        cin>>dsa;
        cout<<"Enter marks obtain in DGS:";
        cin>>dgs;
        cout<<"Enter marks obtain in OOPM:";
        cin>>oopm;
        cout<<"Enter marks obtain in JAVA:";
        cin>>java;
      
    }
     int total_marks(){
        return (eee+dis+dsa+dgs+oopm+java);
     }

};
class result:public exam{
    public:
  
   
   void product(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no.:"<<rollno<<endl;
        cout<<"Sum of Marks is:"<<total_marks();
    }
};
  int main(){
    result obj;
    obj.getdata();

    obj.readdata();
    obj.product();

    return 0;
}                                       