#include "iostream"
#include "math.h"

using namespace std;

int CheckValue(int i) {

	cin.ignore(32767, '\n');
	while (true) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "You enter wrong data, please enter correct data again: ";
			cin >> i;
		}
		else {
			return i;
		}
	}
}

float CheckFloatValue(float i) {

	cin.ignore(32767, '\n');
	while (true) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "You enter wrong data, please enter correct data again: ";
			cin >> i;
		}
		else {
			return i;
		}
	}
}

float CheckCorrectAngle(float f) {

	if (f < 0 || f > 360) {
		cout << "You enter wrong data, angle must be in between 0 and 360 degree:: ";
		cin >> f;
		f = CheckFloatValue(f);
	}
	else {
		return f;
	}
}

int CheckNaturalNumber(int n) {

	if (n < 0) {
		cout << "You enter wrong data, natural numbers are 0...inf.: ";
		cin >> n;
		n = CheckValue(n);
	}
	else {
		return n;
	}
}

void NaturalNumberIsMultipleOfThreeOrFour(int n) {

	if (n % 3 == 0 && n % 9 != 0) {
		cout << "Natural Number - " << n << " Is TRUE! It Is Multiple Of 3 And NOT Multiple Of 9." << endl;
	}
	else if (n % 4 == 0 && n % 5 != 0 && n % 24 != 0) {
		cout << "Natural Number - " << n << " Is TRUE! It Is Multiple Of 4 And NOT Multiple Of 5 And 24." << endl;
	}
	else {
		if (n % 3 == 0) {
			cout << "Natural Number - " << n << " Is FALSE! It Is  Multiple Of 9." << endl;
		}
		else if (n % 4 == 0) {
			cout << "Natural Number - " << n << " Is FALSE! It Is Multiple Of 5 Or 24." << endl;
		}
		else {
			cout << "Natural Number - " << n << " Is FALSE! It Is NOT Multiple Of 3 OR 4." << endl;
		}
	}
}

pair<float, float> CalculateTheExpressionsOfM_And_P(float x,float y,float z) {

	float m, p;
	float pi = 3.14159265;

	m = (2 * sin(x + pi / 5)) / (5 + pow(sin(y), 2)); 
	p = (z + pow(z, 2)) / (3 + 2 * pow(z, 2)) + 5;
	
	return make_pair (m, p);
}

void CalculateFuncForRealNumber(float a) {
	
	if (a < 2 && a >= -2) {
		a = pow(a, 2);
	}
	else {
		a = 4;
	}
	cout << "Function of real number A is: " << a << endl;
}

void CalculateAngleOfMinutesAndTime(float f) {
	
	float h, m;
	int hour, minute, angle;

	h = f / 30;
	hour = h;
	minute = (h - hour) * 60;
	m = minute;
	angle = (m / 60) * 360;

	cout << "Amount of full hours: " << hour << endl;
	cout << "Amount of full minutes: " << minute << endl;
	cout << "Angle of a minute hand with a given ray: " << angle << endl;
}

int MenuOfSolution(int q) {

	pair<float, float> ret;

	switch (q) {
	case 1:
		float x, y, z;
		float m, p;

		cout << "\nYou choose Task A)\n";
		cout << "calculate according to the values x, y, z specified from the keyboard the meaning of the expressions\n"<<endl;
		cout << "Enter x: ";
		cin >> x;
		x = CheckFloatValue(x);
		cout << "Enter y: ";
		cin >> y;
		y = CheckFloatValue(y);
		cout << "Enter z: ";
		cin >> z;
		z = CheckFloatValue(z);
		ret = CalculateTheExpressionsOfM_And_P(x, y, z);
		m = ret.first;
		p = ret.second;
		cout << "Expression value of M: " << m << endl;
		cout << "Expression value of P: " << p << endl;
		break;
	case 2:		
		float a;

		cout << "\nYou choose Task B)\n";
		cout << "calculate f (a) for a given real number a from the keyboard\n" << endl;
		cout << "Enter real number: ";
		cin >> a;
		a = CheckFloatValue(a);
		CalculateFuncForRealNumber(a);
		break;
	case 3:
		float f;

		cout << "\nYou choose Task C)\n";
		cout << "determine the angle of minute and full hours and minutes displayed on the clock\n" << endl;
		cout << "Enter the value of the angle f: ";
		cin >> f;
		f = CheckFloatValue(f);
		f = CheckCorrectAngle(f);
		CalculateAngleOfMinutesAndTime(f);
		break;
	case 4:
		int n;

		cout << "\nYou choose Task G)\n";
		cout << "check if true natural number\n" << endl;
		cout << "Enter Natural Number: ";
		cin >> n;
		n = CheckValue(n);
		n = CheckNaturalNumber(n);
		NaturalNumberIsMultipleOfThreeOrFour(n);
		break;	
	default:
		cout << "You don't enter any task for execution\n";
		return 0;
	}
	return MenuOfSolution(q);
}

int main() {

	int q;
	cout << "\nCreated by Vladislav Samoilov / KNT - 223\n";

	cout << "--------Select task:--------\n";
	cout << "Task A) Calculate The Expressions Of M And P - Enter 1\n";
	cout << "Task B) Calculate Func For Real Number - Enter 2\n";
	cout << "Task C) Calculate Angle Of Minutes And Time - Enter 3\n";
	cout << "Task G) Natural Number Is Multiple Of Three Or Four - Enter 4\n";
	cout << "------------------------------------------------------------\n";
	cin >> q;
	q = CheckValue(q);
	MenuOfSolution(q);

	return main();
}