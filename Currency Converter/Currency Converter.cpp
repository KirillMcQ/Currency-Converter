#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void convert(int choiceIn, float amt) {
	float out;
	if (choiceIn == 1) {
		out = amt * 140.18;
		cout << "$" << amt << " -> " << out << " YEN";
	}
	if (choiceIn == 2) {
		out = amt * 0.87;
		cout << "$" << amt << " -> " << out << " POUNDS";
	}
	if (choiceIn == 3) {
		out = amt * 1.01;
		cout << "$" << amt << " -> " << out << " EUROS";
	}
	if (choiceIn == 4) {
		out = amt * 1.47;
		cout << "$" << amt << " -> " << out << " AUS";
	}
}

int main()
{
	float currencyIn, out;
	int choiceIn, choiceOut;
	cout << "What currency do you want to convert to? 1.YEN 2.POUNDS 3.EUROS 4.AUS. Enter your a number 1-4: ";
	cin >> choiceIn;
	cout << "\n" << "Now enter the amount you want converted. Default is USD: ";
	cin >> currencyIn;
	convert(choiceIn, currencyIn);

}
