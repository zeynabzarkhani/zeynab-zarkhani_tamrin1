#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter 3 vertex of the triangle:";
	cin>>a>>b>>c;
	
	if(a < b+c && b < a+c && c < a+b)
		cout<<"YES";		
		
	else
		cout<<"NO";
}