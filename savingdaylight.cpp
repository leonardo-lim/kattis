#include <bits/stdc++.h>

using namespace std;

int main() {
	int day, year, hour = 0, minute = 0;
	string month, rise, set;
	
	while (cin >> month >> day >> year >> rise >> set) {
		if (set[1] == ':') {
			hour += set[0] % 48;
			minute += (set[2] % 48) * 10;
			minute += set[3] % 48;
		} else {
			hour += (set[0] % 48) * 10;
			hour += set[1] % 48;
			minute += (set[3] % 48) * 10;
			minute += set[4] % 48;
		}

		if (rise[1] == ':') {
			hour -= rise[0] % 48;
			minute -= (rise[2] % 48) * 10;
			minute -= rise[3] % 48;
		} else {
			hour -= (rise[0] % 48) * 10;
			hour -= rise[1] % 48;
			minute -= (rise[3] % 48) * 10;
			minute -= rise[4] % 48;
		}
		
		if (minute < 0) {
			hour--;
			minute += 60;
		}
		
		cout << month << " " << day << " " << year << " " << hour << " hours " << minute << " minutes" << endl;
		hour = 0;
		minute = 0;
	}
	
	return 0;
}
