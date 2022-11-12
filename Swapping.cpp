#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	cout<<endl;
	
	c=a;
	a=b;
	b=c; 
		
	cout <<"Boom !!! Swapping of given values has been done."<<endl<<endl;
	
	cout<<"The value of a is : "<<a<<endl;
	cout<<"The value of b is : "<<b;
	
}
