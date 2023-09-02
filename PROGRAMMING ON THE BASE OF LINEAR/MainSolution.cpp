#include "iostream"

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
			cout << "Natural Number - " << n << " Is NOT Multiple Of 3 OR 4." << endl;
		}
	}
}


int main() {
	int n;
	cout << "Enter Natural Number: ";
	cin >> n;

	NaturalNumberIsMultipleOfThreeOrFour(n);
	
	
	return main();
}