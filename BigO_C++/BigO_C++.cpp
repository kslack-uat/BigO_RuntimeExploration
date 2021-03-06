// BigO_C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include <iostream>
#include "time.h"

using namespace std;

int ContantTime(int n)
{
	int count = 0;
	count++;
	return count;
}

int LogTime(int n)
{
	int count = 0;
	for(int i = 0; i < log(n); i++ )
	{
		count++;
	}
	return count;
}

int LinearTime(int n)
{
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		count++;
	}
	return count;
}

int NLogNTime(int n)
{
	int count = 0;
	// What code would go here?
	return count;
}

int QuadraticTime(int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			count++;
		}
	}
	return count;
}


int CubicTime(int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				count++;
			}
		}
	}
	return count;
}


void menu()
{
	int algorithm_selection = -1;
	cout << "Select the Algorithm you would like to run: " << endl;
	cout << "  (1) Linear Time" << endl;
	cout << "  (2) Log Time" << endl;
	cout << "  (3) Linear Time" << endl;
	cout << "  (4) NLogN Time" << endl;
	cout << "  (5) Quadratic Time" << endl;
	cout << "  (6) Cubic Time" << endl;
	cin >> algorithm_selection;

	int n_value = 0;
	cout << endl << "Specify the value of n:" << endl;
	cin >> n_value;

	int returned_count = 0;
	clock_t start_clock = clock();
	switch(algorithm_selection)
	{
		case 1: returned_count = ContantTime(n_value);
			break;
		case 2: returned_count = LogTime(n_value);
			break;
		case 3: returned_count = LinearTime(n_value);
			break;
		case 4: returned_count = NLogNTime(n_value);
			break;
		case 5: returned_count = QuadraticTime(n_value);
			break;
		case 6: returned_count = CubicTime(n_value);
			break;
		default: cout << "FAIL! - Invalid selection" << endl;
			break;
	}
	clock_t elapsed_clock = clock() - start_clock;

	// Report Results
	cout << "Count++ ran " << returned_count << " times." << endl;
	cout << "The function ran for " << (double)elapsed_clock << " clicks in " << (double)elapsed_clock / CLOCKS_PER_SEC << " seconds." << endl;
}

int main()
{
	menu();

	// Pause
	cout << "Enter any character and return to exit. " << endl;
	int any_key = 0;
	cin >> any_key;
    return 0;
}

