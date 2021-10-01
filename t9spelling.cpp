#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, length;
	string x, y = "";
	char z, c;
	
	cin >> n;
	
	cin.ignore();
	
	for (int i = 0; i < n; i++) {
		getline(cin, x);
		
		length = x.size();
		
		for (int j = 0; j < length; j++) {
			if (x[j] == 'a' || x[j] == 'b' || x[j] == 'c') c = '2';
			else if (x[j] == 'd' || x[j] == 'e' || x[j] == 'f')	c = '3';
			else if (x[j] == 'g' || x[j] == 'h' || x[j] == 'i')	c = '4';
			else if (x[j] == 'j' || x[j] == 'k' || x[j] == 'l')	c = '5';
			else if (x[j] == 'm' || x[j] == 'n' || x[j] == 'o') c = '6';
			else if (x[j] == 'p' || x[j] == 'q' || x[j] == 'r' || x[j] == 's') c = '7';
			else if (x[j] == 't' || x[j] == 'u' || x[j] == 'v')	c = '8';
			else if (x[j] == 'w' || x[j] == 'x' || x[j] == 'y' || x[j] == 'z') c = '9';
			else if (x[j] == ' ') c = '0';
			
			if (z == c) {
				y += ' ';
			}
			
			if (x[j] == 'a') y += "2";
			else if (x[j] == 'b') y += "22";
			else if (x[j] == 'c') y += "222";
			else if (x[j] == 'd') y += "3";
			else if (x[j] == 'e') y += "33";
			else if (x[j] == 'f') y += "333";
			else if (x[j] == 'g') y += "4";
			else if (x[j] == 'h') y += "44";
			else if (x[j] == 'i') y += "444";
			else if (x[j] == 'j') y += "5";
			else if (x[j] == 'k') y += "55";
			else if (x[j] == 'l') y += "555";
			else if (x[j] == 'm') y += "6";
			else if (x[j] == 'n') y += "66";
			else if (x[j] == 'o') y += "666";
			else if (x[j] == 'p') y += "7";
			else if (x[j] == 'q') y += "77";
			else if (x[j] == 'r') y += "777";
			else if (x[j] == 's') y += "7777";
			else if (x[j] == 't') y += "8";
			else if (x[j] == 'u') y += "88";
			else if (x[j] == 'v') y += "888";
			else if (x[j] == 'w') y += "9";
			else if (x[j] == 'x') y += "99";
			else if (x[j] == 'y') y += "999";
			else if (x[j] == 'z') y += "9999";
			else if (x[j] == ' ') y += "0";
			
			z = y.back();
		}
		
		cout << "Case #" << i + 1 << ": " << y << endl;
		y = "";
	}

	return 0;
}
