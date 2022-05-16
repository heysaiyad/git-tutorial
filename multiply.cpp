#include<iostream>
using namespace std;

class Multiply{
    int mul, a, b;
    public:
        void get(){
            cout << "Enter two numbers : ";
            cin >> a >> b;
        }
        void display(){
            mul = a * b;
            cout << "Result : " << mul;
        }
};

int main(){
    Multiply obj;

    obj.get();
    obj.display();

    return 0;
}