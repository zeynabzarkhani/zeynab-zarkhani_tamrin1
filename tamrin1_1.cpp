#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a,b,f=1;
	string op;	
	cout<<"Enter Tow Numbers:";
	cin>>a>>b;
	cout<<"Operand:";
	cin>>op;
	if(op == "+")
		cout<<a+b;
	else if(op == "-")
		cout<<a-b;
	else if(op == "/")
	{
		if(b == 0)
		{
			cout<<"EROR! Division by zero!";
		}
		cout<<a/b;
	}
	else if(op == "*")
		cout<<a*b;
		
	else if(op == "rad")
		cout<<sqrt(a);
		
	else if(op == "cos")
		cout<<cos(a);
		
	else if(op == "cot")
	{
		cout<<cos(a)/sin(a);
	}
	else if(op == "tan")
		cout<<tan(a);
		
	else if (op == "fact")
	{
		for(long int i=1;i<=a;i++)
		{
			f = f * i;
		}
		cout<<f;
	}
}