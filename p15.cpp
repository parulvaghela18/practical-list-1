#include<iostream>
using namespace std;

int main()
{
	int abc=0,n,i;
	
	cout<<"Enter a number::"<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"0 is neither prime nor composite number"<<endl;
	}
	else if(n==1)
	{
		cout<<"1 is neither prime nor composite number"<<endl;
	}
	for(i=0;i<n;i++)
	{
		if(n%i==0)
		abc++;
	}
	if(abc && n!=0 && n!=1)
	{
		cout<<"it is a composite number"<<n;
	}
	else if(n!=0 && n!=1)
	{
		cout<<"it is prime number"<<n;
	}
	return 0;
}
