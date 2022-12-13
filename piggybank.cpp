#include<iostream>
using namespace std;

class addamount{
    int amount;
    
    public:
    addamount(){
        amount=50;
        cout<<"Initial Amount  in the Piggy bank is:"<<amount<<endl;
    }
    addamount(int n){
        amount=50;
        amount +=n;
       
    }
    void display(){

         cout<<"Total Amount in the Piggy bank is:"<<amount<<endl;
    }
};

int main(){
    addamount obj,obj1(1000);
    
    obj1.display();

    return 0;
}