#include<iostream>
using namespace std;
int main()
{
	char letter_grade{};
	cout<<"Enter the letter grade you want in the exam"<<endl;
	cin>>letter_grade;
	switch(letter_grade)
	{
		case 'a':
		case 'A':
			cout<<"You need 90 or above; study hard"<<endl;
			break;
		case 'b':
		case 'B':
			cout<<"You need 80 to 89"<<endl;
			break;
		case 'c':
		case 'C':
			cout<<"You need 70 to 79 for an average grade"<<endl;
			break;
		case 'd':
		case 'D':
			cout<<"You should strive for a better grade; You will need 60 to 69"<<endl;
			break;
		case 'f':
		case 'F':
			{
			char confirm{};
			cout<<"Are sure(Y/N)"<<endl;
			cin>>confirm;
			if(confirm == 'y' || confirm == 'Y')
				cout<<"OK, I guess you didnt study"<<endl;
			else if(confirm == 'n' || confirm == 'N')
				cout<<"Good; Go study"<<endl;
			else
				cout<<"illegal choice"<<endl;
			break;
			}
		default:
			cout<<"Sorry that is not a valid grade"<<endl;
	}
cout<<endl;
return 0;
}
