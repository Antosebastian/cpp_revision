#include<iostream>

using namespace std;

int main()
{
	char selection{};
	do{
	cout<<"\n----------------------"<<endl;
	cout<<"1. Do This"<<endl;
	cout<<"2. Do That"<<endl;
	cout<<"3. Do something else"<<endl;
	cout<<"Q. Quit"<<endl;
	cout<<"Enter your selection"<<endl;
	cin<<selection;

	if (selection == '1')
		cout<<"U Chose 1"<<endl;
	else if(selection == '2')
		cout<<"U chose 2"<<endl;
	else if(selection == '3')
		cout<<"U chose 3"<<endl;
	else if(selection == 'Q' || selection == 'q')
		cout<<"U chose to Quit"<<end;
	else	
		cout<<"Unknown option"<<endl;
	}while(selection != 'Q' && selection != 'q');

cout<<endl;
return 0;
}
