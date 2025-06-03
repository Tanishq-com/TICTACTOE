#include<iostream>
using namespace std;
template <class t,class y>

class temp{
    t A;
    y B;
    public:
        temp(t a,y b){
            A=a;
            B=b;
        }

        y sum(){
            return A+B;
        }
};

int main(){
    temp<int,float>obj(3,4.0f);
    cout<<obj.sum();
    
    return 0;
}