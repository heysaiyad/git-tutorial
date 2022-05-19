#include<iostream>
using namespace std;

class Multiply{
//<<<<<<< HEAD
    int a, b;
//=======

//>>>>>>> devBranch
    public:
        void get(){
            cout << "Enter two numbers : ";
            cin >> a >> b;
        }
        void display(){
            cout << "Result : " << a * b;
        }
};

int main(){
    Multiply obj;

    obj.get();
    obj.display();

    return 0;
}
