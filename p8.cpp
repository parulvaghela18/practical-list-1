#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float p,t,r,ci;
	cout<<"Enter the Initial Principle:"<<endl;
	cin>>p;
	cout<<"Enter the Rate of Intrest :"<<endl;
	cin>>r;
	cout<<"Enter the Number of times the interval:"<<endl;
	cin>>t;
	ci=p*pow(1+r/100,t)-p;
	cout<<"Compound Intrest is :"<<ci;
	
	return 0;
}
