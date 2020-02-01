//C++ programming ;Tim Buchalka's Learn Programming Acadamy
//Section 9; Range based for loop

#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{

//scores using the range based for loop

//	int scores[]{10, 20, 30};
//	for(auto score: scores)
//		cout<<score<<endl;

//mean of the temperatures using the range based for loop

	vector<double>temperature{78.0, 79.1, 85.6, 83.2};
	double total{};
	for(auto temp: temperature)
		total += temp;
	if(temperature.size() !=0)
		cout<<fixed<<setprecision(1);
		cout<<"average temperature ="<<total/temperature.size();



	cout<<endl;
	return 0;	 
}
