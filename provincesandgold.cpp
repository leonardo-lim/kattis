#include <iostream>
#include <string>

using namespace std;

int main() {
	int g, s, c, total;
	string vCard, tCard;
	
	cin >> g >> s >> c;
	
	total = g * 3 + s * 2 + c;
	
	if (total >= 8) vCard = "Province";
	else if (total >= 5) vCard = "Duchy";
	else if (total >= 2) vCard = "Estate";
	
	if (total >= 6) tCard = "Gold";
	else if (total >= 3) tCard = "Silver";
	else tCard = "Copper";
	
	if (vCard == "") {
		cout << "Copper";
	} else {
		cout << vCard << " or " << tCard;
	}

	return 0;
}
