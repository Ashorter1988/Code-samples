// ConsoleApplication7.cpp : Defines the entry point for the console application.
//'
#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	char ascii;
	int numeric;
	cout << "Give character: ";
	cin >> ascii;
	cout << "Its ascii value is: " << (int)ascii << endl;

	system("pause");
	return 0;
}
