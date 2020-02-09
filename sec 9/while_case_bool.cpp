//using a bool_true or false in a while

#include<iostream>

using namespace std;

int main()
{
	bool done(false);
	int num{0};
	cout<<"Enter a number within the range 1 and 5"<<endl;
	cin>>num;
	while(!done)// first time using such an idea in a while loop # great 
	{
		if(num > 0 && num <= 5)
			cout<<"Entered number is "<<num<<"Thanks"<<endl;
		else
			cout<<"Out of range"<<endl;
		done = true;
	}
	cout<<endl;
	return 0;
}


