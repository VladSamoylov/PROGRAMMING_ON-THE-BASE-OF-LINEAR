#include "iostream"
#include "math.h"

using namespace std;

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
	cout << "Function of real number a is: " << a << endl;
}

void MenuOfSolution() {
	int q = 3;
	pair<float, float> ret;
	
	switch (q) {
	case 1:
		int n;

		cout << "Enter Natural Number: ";
		cin >> n;
		NaturalNumberIsMultipleOfThreeOrFour(n);
		break;
	case 2:
		float x, y, z;
		float m, p;

		cout << "Enter x: ";
		cin >> x;
		cout << "Enter y: ";
		cin >> y;
		cout << "Enter z: ";
		cin >> z;
		ret = CalculateTheExpressionsOfM_And_P(x, y, z);
		m = ret.first;
		p = ret.second;
		cout <<"Expression value of M: " << m << endl;
		cout << "Expression value of P: " << p << endl;
		break;
	case 3:
		float a;

		cout << "Enter real number: ";
		cin >> a;
		CalculateFuncForRealNumber(a);
		break;
	}
}


int main() {

	MenuOfSolution();
	
	
	return main();
}