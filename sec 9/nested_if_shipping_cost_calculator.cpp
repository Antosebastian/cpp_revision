#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int length{}, width{}, hieght{};
	const double base_cost{2.5};

	const int tier1_threashold{100};
	const int tier2_threashold{500};

	int max_diamension_length{10};

	double tier1_surcharge{0.10};
	double tier2_surcharge{0.25};

	int package_volume{};

	cout<<"Welcome to shipping cost calculator"<<endl;
	cout<<"Enter the length, width and hieght of the package to be shipped seperated by spaces"<<endl;
	cin>>length>>width>>hieght;
	if(length < max_diamension_length || width < max_diamension_length || hieght < max_diamension_length)
	{
		double package_cost{};
		package_volume = length*width*hieght;
		package_cost = base_cost;
		if(package_volume > tier2_threashold)
		{
			package_cost += package_cost * tier2_surcharge;
			cout<<"package cost is "<<package_cost<<endl;
		}
		else if(package_volume > tier1_threashold)
		{
			package_cost += package_cost * tier1_surcharge;
			cout<<"Package cost is "<<package_cost<<endl;
		}
		else
			cout<<"Package cost is "<<package_cost<<endl;
	}
	else
		cout<<"The maximum diamension per side of the box should be less than 10 inches"<<endl;

}

