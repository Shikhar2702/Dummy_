#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a=3,b=4;
    int area(){
        return a*b;
    }
};
class B:public A{
    // int a = 10;
    public:
    int area(){
        return a*a;
    }
};
class C:public B{
    // int a = 9;
    public:
    double area(){
        return 3.14*a*a;
    }
};

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
        A obj1;
        B obj2;
        C obj3;
        cout<<obj1.area()<<" "<<obj2.area()<<" "<<obj3.area()<<"\n";
    return 0;
}