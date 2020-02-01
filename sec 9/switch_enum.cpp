
// only to demonstrate the enum and the possible warnings if all the enum variables are not mentioned in the switch

#include<iostream>

using namespace std;

int main()
{
	enum direction{north, south, east, west};
	direction heading{north};
	switch(heading)
	{
		case north:
			cout<<"going north"<<endl;
			break;
		case south:
			cout<<"going south"<<endl;
			break;
		case east:
			cout<<"going East"<<endl;
			break;
		case west:
			cout<<"going West"<<endl;
			break;
	}
cout<<endl;
return 0;
}
