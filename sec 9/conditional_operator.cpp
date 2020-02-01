// A program to test conditional operator

#include<iostream>

using namespace std;

//int main()
//{
//	int num;
//	cout<<"enter an integer"<<endl;
//	cin>>num;
	//if(num%2 == 0)
	//	cout<<"number is even"<<endl;
	//else
	//	cout<<"number is odd"<<endl;
//	cout<<num<<" is "<<((num%2 == 0)?"even":"odd")<<endl;

//cout<<endl;
//return 0;
//}

int main()
{
	int num1{},num2{};
	cout<<"Enter 2 numbers"<<endl;
	cin>>num1>>num2;
	if (num1 != num2)
	{
		cout<<"largest of the two numbers is : "<< ((num1>num2)?num1:num2)<<endl;
		cout<<"smallest of the two numbers is : "<< ((num1<num2)?num1:num2)<<endl;
	}
	else
		cout<<"both the numbers are the same"<<endl; 
	cout<<endl;
	return 0;
}
