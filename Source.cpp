#include <iostream>
using namespace std;

int main() {
	bool gullible = true;
	int userInput;
	int counter = 0;
	while (gullible == true) {
		cout << "Enter any number other than 5" << endl;
		cin >> userInput;
		if (userInput == 5) {
			cout << "Hey! You weren't supposed to enter 5!";
			gullible = false;
		}
		else if (counter == 10) {
			cout << "Wow, you're more patient than I am, you win." << endl;
			gullible = false;
		}
		counter++;
	}
	system("PAUSE");
}