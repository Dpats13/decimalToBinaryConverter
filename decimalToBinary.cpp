#include <iostream>
#include <string>
#include <string.h>
#include <stack>

using namespace std;

void decimalToBinary(int decimalNumber) {
	stack<int> stack;
	int quotient = decimalNumber; //need to repeatedly divide the quotient by 2, until reaching 0, so start this variable w/ dec number
	int remainder = 0;
	string binaryNumber = "";
	while (quotient > 0) {

		remainder = quotient % 2;
		quotient = quotient / 2;
		//cout << quotient << "   " << remainder << endl;
		stack.push(remainder);
		
	}

	while (!stack.empty()) {
		cout << stack.top();
		stack.pop();
	}

	cout << endl;
}

int main() {
	bool cont = true;
	string userAnswer;
	int decimalNumberToConvert = 0;
	while (cont == true) {
		cout << "Enter integer number in base 10 to convert to base 2 (binary): ";
		cin >> decimalNumberToConvert;
		decimalToBinary(decimalNumberToConvert);
		cout << "Do you wish to continue?" << endl;
		cin.ignore();
		cin >> userAnswer;
		if (userAnswer.at(0) == 'y' || userAnswer.at(0) == 'Y') {
			cont = true;
		}
		else {
			cont = false;
		}
	}
	return 0;
}