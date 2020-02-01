#include<iostream>

using namespace std;

int main()
{
	for(int i{0}; i<=100; i++)
	{
		cout<<i;
		cout<<((i%10 ==0)?"\n":" ");
	}


cout<<endl;
return 0;
}
