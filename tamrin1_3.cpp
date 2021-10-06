#include<iostream>
using namespace std;
int main()
{
	float w,h,BMI;
	cout<<"Enter your Weight:";
	cin>>w;
	cout<<"Enter your Height:";
	cin>>h;
	BMI = w/(h*h);
	if(BMI >= 18.5 && BMI < 25)
    	cout<<"Normal";
    else if(BMI >= 25 && BMI < 30)
        cout<<"OverWeight";
    else if(BMI >= 30 && BMI < 35)
        cout<<"Obese";
    else if(BMI >= 35)
        cout<<"ExtermlyObese";
	
}