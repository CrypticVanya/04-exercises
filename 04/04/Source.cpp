#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/* 
//exercise 1

int askNum(string);

int main() {

	int userNum1 = 0,
		userNum2 = 0;

	userNum1 = askNum("Enter Number 1: ");
	userNum2 = askNum("Enter Number 2: ");

	if (userNum1 > userNum2) {
		cout << "congrats, " << userNum1 << " is greater than " << userNum2 << endl;
	}
	else if (userNum1 == userNum2) {
		cout << "They're the same number";
	}
	else {
		cout << "congrats, " << userNum2 << " is greater than " << userNum1 << endl;
	}

}

int askNum(string prompt) {
	int num = 0;

	cout << prompt;
	cin >> num;

	return num;
}

*/


/*
//exercise 2

int askNum(string);
void processSelection(int);

int main() {

	int userNum = 0;

	userNum = askNum("Enter a number and I will show you the roman numeral ");

	processSelection(userNum);
	
}

int askNum(string prompt) {
	int userNum = 0;
	bool validNum = true;

	do {
		cout << prompt;
		cin >> userNum;
		validNum = ((userNum < 0) || (userNum > 10));
		if (validNum) {
			cout << "Please, enter a number between 1-10 \n";
		}
	} while (validNum);

	return userNum;
}

void  processSelection(int userNum) {

	switch (userNum) {
	case 1:
		cout << "The roman numeral is I";
		break;
	case 2:
		cout << "The roman numeral is II";
		break;
	case 3: 
		cout << "The roman numeral is III";
		break;
	case 4: 
		cout << "The roman numeral is IV";
		break;
	case 5:
		cout << "The roman numeral is V";
		break;
	case 6:
		cout << "The roman numeral is VI";
		break;
	case 7:
		cout << "The roman numeral is VII";
		break;
	case 8:
		cout << "The roman numeral is VIII";
		break;
	case 9:
		cout << "The roman numeral is IX";
		break;
	case 10:
		cout << "The roman numeral is X";
		break;
	}
}

*/

/*
//exercise 2

int askUser(string);

int main() {
	int day = 0,
		month = 0,
		year = 0,
		luckyNum = 0;

	day = askUser("Please, enter the day: ");
	month = askUser("Please, enter the month: ");
	year = askUser("Please, enter the year: ");
	luckyNum = (day * month);

	if (year == luckyNum) {
		cout << "Congrats, you have enter a lucky day! ";
	}
	else {
		cout << "Sorry, youre not lucky today! ";
	}



}

int askUser(string prompt) {
	int userNum = 0;
	bool validNum = true;

	do {
		cout << prompt;
		cin >> userNum;
		validNum = (userNum < 0);
		if (validNum) {
			cout << "Please, enter only positive numbers. \n";
	}
	} while (validNum);

	return userNum;
}
*/

/*
//exercise 4
int posNum(string);

int main() {
	int length1 = 0,
		width1 = 0,
		length2 = 0,
		width2 = 0,
		rectangle1 = 0,
		rectangle2 = 0;

	length1 = posNum("Please, enter the length for rectangle 1: ");
	width1 = posNum("Please, enter the width for rectangle 1: ");
	length2 = posNum("Please, enter the length for rectangle 2: ");
	width2 = posNum("Please, enter the width for rectangle 2: ");
	rectangle1 = (length1 * width1);
	rectangle2 = (length2 * width2);

	if (rectangle1 > rectangle2) {
		cout << "Rectangle 1 is the bigger rectangle";
	}
	else if (rectangle1 == rectangle2) {
		cout << "They're the same!!";
	}
	else {
		cout << "Rectangle 2 is bigger";
	}

}

int posNum(string prompt) {
	int userNum = 0;
	bool validEntry = true;

	do {
		cout << prompt;
		cin >> userNum;
		validEntry = (userNum < 0);
		if (validEntry) {
			cout << "Please, enter a positive number. \n";
		}
	} while (validEntry);

	return userNum;
}
*/

/*
//exercise 5


int posNum(string);

int main() {
	int weight = 0,
		height = 0,
		bmi = 0;

	weight = posNum("Enter your weight(lbs): ");
	height = posNum("Enter your height(in): ");
	bmi = (weight * (703 / pow(height, 2)));

	if (bmi < 18.5) {
		cout << "Youre underwight";
	}
	else if (bmi >= 18.5 || bmi <= 25) {
		cout << "youre doing great";
	}
	else {
		cout << "youre fat";
	}
}

int posNum(string prompt) {
	int userNum = 0;
	bool validEntry = true;

	do {
		cout << prompt;
		cin >> userNum;
		validEntry = !(userNum > 0);
		if (validEntry) {
			cout << "Please, enter a positive number";
		}
	} while (validEntry);

	return userNum;
}

*/

