#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x,x1,s=0,eps=0.0001;
    cout<<"Enter x: ";
    cin>>x;
    int n=1;
    do {x1=pow(-1,n+1)*pow(x,n)/n;
    s+=x1;
    n++;}
    while (x1>eps);
    cout<<log(x+1)<<endl;
	cout<<s<<endl;
}
