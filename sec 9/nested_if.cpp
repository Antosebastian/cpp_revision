#include<iostream>
using namespace std;
int main()
{
	int score{};
	cout<<"Enter your score for the exam (0-100)"<<endl;
	cin>>score;
	char letter_grade{};
	if(score>=0 && score<=100)
	{
		if(score >= 90)
			letter_grade = 'A';
		else if(score >= 80)
			letter_grade = 'B';
		else if(score >= 70)
			letter_grade = 'C';
		else if(score >= 60)
			letter_grade = 'D';
		else
			letter_grade = 'F';
		cout<<"Your grade is:"<<letter_grade<<endl;
		if(letter_grade == 'F')
			cout<<"Sorry, you must repeat"<<endl;
		else
			cout<<"You have passed"<<endl;
	}
	else
		cout<<"Sorry; the number entered is not in range"<<endl;
	return 0;
}
