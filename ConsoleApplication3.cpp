// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {

	
	double A = 0, B = 0, C = 0;
	
	cout << "Please Enter Side A:"; cin >> A; cin.clear(); cin.ignore(255, '\n');
	cout << "Please Enter Side B:"; cin >> B; cin.clear(); cin.ignore(255, '\n');
	cout << "Please Enter Side C:"; cin >> C; cin.clear(); cin.ignore(255, '\n');

	
	double perimeter = 0.0;

	if ((A + B) <= C || (B + C) <= A || (C + A) <= B) {
		
		cout << endl << "The Triangle Is Invalid." << endl;
	}
	else { 
		cout << "The Perimeter Of The Triangle Is " << (A + B + C) << endl;
	}
	system("pause");
	return 0;

}