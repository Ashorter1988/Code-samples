#include <iostream> 

using namespace std;

int main()
{

	char letter;
	int number;

	cout << "Enter a letter:  ";
	cin >> letter;

	switch (letter){
	case 'A':
	case 'a':
	case 'B':
	case 'b':
	case 'C':
	case 'c':
		number = 2;
		break;

	case 'D':
	case 'd':
	case 'E':
	case 'e':
	case 'F':
	case 'f':
		number = 3;
		break;

	case 'G':
	case 'g':
	case 'H':
	case 'h':
	case 'I':
	case 'i':
		number = 4;
		break;

	case 'J':
	case 'j':
	case 'K':
	case 'k':
	case 'L':
	case 'l':
		number = 5;
		break;

	case 'M':
	case 'm':
	case 'N':
	case 'n':
	case 'O':
	case 'o':
		number = 6;
		break;

	case 'P':
	case 'p':
	case 'Q':
	case 'q':
	case 'R':
	case 'r':
	case 'S':
	case 's':
		number = 7;
		break;

	case 'T':
	case 't':
	case 'U':
	case 'u':
	case 'V':
	case 'v':
		number = 8;
		break;

	case 'W':
	case 'w':
	case 'X':
	case 'x':
	case 'Y':
	case 'y':
	case 'Z':
	case 'z':
		number = 9;
		break;
	}
	cout << number << endl;
	system("pause");
	return 0;
}