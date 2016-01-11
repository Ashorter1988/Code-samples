

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

	double sort3 (double num1, double num2, double num3);

	double num1;
	double num2;
	double num3;

    double sort3 (double num1, double num2, double num3)
	{
		if (num1 <= num2 && num2 <= num3)
		{
			cout << "the order of your integers is" << num1 << "," << num2 << "," << num3;
		}
		else if (num1 <= num3 && num3 <= num2)
		{
			cout << "the order of your integers is" << num1 << "," << num3 << "," << num2;
			break;
		}
		else if (num2 <= num1 && num1 <= num3)
		{
			cout << "the order of your integers is" << num2 << "," << num1 << "," << num3;
			break;
		}
		else if (num2 <= num3 && num3 <= num1)
		{
			cout << "the order of your integers is" << num2 << "," << num3 << "," << num1;
			break;
		}
		else if (num3 <= num1 && num1 <= num2)
		{
			cout << "the order of your integers is" << num3 << "," << num1 << "," << num2;
			break; 
		}
		else if (num3 <= num2 && num2 <= num1)
		{
			cout << "the order of your integers is" << num3 << "," << num2 << "," << num1;
			break;
		}
	}

int main(){

	cout << "enter integer one" << endl;
	cin >> num1;

	cout << "enter integer two" << endl;
	cin >> num2;

	cout << "enter integer three" << endl;
	cin >> num3;

	cout << int double sort3 ;

	
	system("pause");

	return 0;
}

