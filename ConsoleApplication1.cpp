// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	
	//variables to Save Value For sums and avgs
	//Sum
	double sum_tea = 0, avg_tea = 0 ,
	sum_coffee = 0, avg_coffee = 0 ,
	sum_sugar = 0, avg_sugar = 0;

	double min, avg;
	int const months = 3; 
	double teaBuy[months], coffeBuy[months], sugarBuy[months];
	// a loop throgh months to store prices
	for (int i = 0; i < months; i++)
	{
		cout << "Tea Sale Price, fo month: " << (i + 1) << endl;
		cin >> teaBuy[i];
		cout << "Enter the price of cofee : Month " << (i + 1) << endl;
		cin >> coffeBuy[i];
		cout << "Enter the price of sugar : Month " << (i + 1) << endl;
		cin >> sugarBuy[i];
	}

	// calculate sums 
	for (int i = 0; i < months; i++)
	{
		sum_tea += teaBuy[i];
		sum_coffee += coffeBuy[i];
		sum_sugar += sugarBuy[i];
	}

	// calculate avgs
	avg_tea = sum_tea / months;
	avg_coffee = sum_coffee / months;
	avg_sugar = sum_sugar / months;

	min = avg_tea;

	// get the smallest avg
	if (avg_coffee < min)
		min = avg_coffee;
	else if (avg_sugar < min)
		min = avg_sugar;

	avg = avg_tea + avg_coffee + avg_sugar;

	// output results
	cout << "average tea = " << avg_tea << endl;
	cout << "average  coffee = " << avg_coffee << endl;
	cout << "average sugar = " << avg_sugar << endl;

	cout << "The Min average : " << min << endl;
	cout << "averages : " << avg << endl;

	cout << "ABS tea = " << abs(teaBuy[1] - teaBuy[months - 1]) << endl;
	cout << " ABS  coffee = " << abs(coffeBuy[1] - coffeBuy[months - 1]) << endl;
	cout << "ABS   sugar = " << abs(sugarBuy[1] - sugarBuy[months - 1]) << endl;

}
