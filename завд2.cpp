#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,x;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Enter x: ";
    cin>>x;
    if ((x<0)&&(b!=0)) {cout<<"Case 1: "<<a*pow(x,3)+b*pow(x,2)<<endl;}
    else if ((x>0)&&(b==0)) {cout<<"Case 2: "<<(x-a)/(x-c)<<endl;}
    else {cout<<"Case 3: "<<(x+5)/(c*(x-10))<<endl;}
}
