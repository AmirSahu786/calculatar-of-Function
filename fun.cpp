#include<iostream>
#include<cmath>
using namespace std;
int sum(int a,int b)
{
	return (a+b);
}
int sub(int a,int b)
{
	return (a-b);
}
int mul(int a,int b)
{
	return (a*b);
}
int div(int a,int b)
{
	return (a/b);
}
int reminder(int a,int b)
{
	return(a%b);
}
int sqrt(int a,int b)
{
 cout<<"Square root of a is :"<<endl;
 cout<<sqrt(a)<<endl;
 cout<<"Square root of b is :"<<endl;
 cout<<sqrt(b);
}
int lyg(int a,int b)
{
	cout<<"Log of a is :"<<endl;
	cout<<log(a);
	cout<<"log of b is :"<<endl;
	cout<<log(b);
}
int main()
{
	int a,b;
	char op;
	cout<<"Enter 1st number :\n";
	cin>>a;
	cout<<"Enter 2nd number :\n";
	cin>>b;
	cout<<"Enter operator :\n";
	cin>>op;
	switch(op)
	{
		case'+':
		cout<<"The sum is :"<<sum(a,b);
		break;
		case'-':
		cout<<"The subtract is :"<<sub(a,b);
		break;
		case'*':
		cout<<"The multiplication is :"<<mul(a,b);
		break;
		case'/':
		cout<<"The division is :"<<div(a,b);
		break;
		case'%':
		cout<<"The reminder is :"<<reminder(a,b);
		break;
		case's':
		sqrt(a,b);
		break;
		case'l':
		lyg(a,b);
		break;
			
	}
}
