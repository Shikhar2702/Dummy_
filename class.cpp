//Create a class distance which has attributes feet and inches and members distances and add to add and display inches and feet seperately.
#include<bits/stdc++.h>
using namespace std;

class Distance{
    int feet, inches;
    public:
    Distance(){}
    Distance(int f, int i){
        feet = f;
        inches = i;
    }
    void display_dis(){
        cout<<feet<<" feets "<<inches<<" inches "<<endl;
    }
    Distance operator+(const Distance &obj){
        Distance newobj;
        newobj.feet = feet + obj.feet;
        newobj.inches = inches + obj.inches;
        return newobj;
    }
};


int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    Distance a(5,8);
    Distance b(3,2);
    a = a + b;
    a.display_dis();

    return 0;
}

