#include<iostream>
using namespace std;

class Multiply{
    int a, b;
    public:
        void get(){
            cout << "Enter two numbers : ";
            cin >> a >> b;
        }
        int result(){
            return a * b;
        }
};

int main(){
    Multiply obj;

    obj.get();
    int res = obj.result();
    cout << "Result : " << res;

    return 0;
}