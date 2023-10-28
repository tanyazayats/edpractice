#include <iostream>
using namespace std;

int main(){
	int n, x1,x2,x3,x, k;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter the first number: ";
    cin>>x1;
	cout<<"Enter the second number: ";
    cin>>x2;
    x=x1+x2;
    k=1;
	for (int i=3;i<=n;i++)
    {cout<<"Enter the next number: ";
    cin>>x3;
    if(x>=(x2+x3)) {x=x2+x3; k=i-1;}
    x2=x3;
    }
	cout<<" min="<<x<<" when x"<<k<<"+x"<<k+1;
}
