#include<iostream>
using namespace std;
int main()
{
	string Name,Family,Status;
	cout<<"enter your name:";
	cin>>Name;
	cout<<"enter your family:";
	cin>>Family;
	
	float a,b,c,avg;
	cout<<"enter your scores:";
	cin>>a>>b>>c;
	
	avg = (a+b+c)/3;
	
	if(avg >= 17)
	{
		Status = "Great";
	}
	else if(avg >= 12 && avg < 17)
	{
		Status = "Normal";
	}
	else
	{
		Status = "Fail";
	}
	
	cout<<Name<<" "<<Family<<" is "<<Status;
}