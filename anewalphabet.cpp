#include <iostream>
#include <string>

using namespace std;

int main() {
	string a[26] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};
	string x;
	
	getline(cin, x);
	
	int length = x.size();
	
	for (int i = 0; i < length; i++) {
		if (x[i] >= 97 && x[i] <= 122) {
			cout << a[x[i] % 97];
		} else if (x[i] >= 65 && x[i] <= 90){
			cout << a[x[i] % 65];
		} else {
			cout << x[i];
		}
	}

	return 0;
}
