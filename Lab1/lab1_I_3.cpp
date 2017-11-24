#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char s[200], t[200];

	cin >> s >> t;

	for (int i = 0; s[i] != 0; i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	for (int i = 0; t[i] != 0; i++) {
		if (t[i] >= 'a' && t[i] <= 'z')
			t[i] -= 32;
	}

	cout << s << " "<< t << "\n";

	for (int i = 0; s[i] != 0; i++) {
		s[i] += 32;
		cout << s[i];
	}
	
	cout << " ";
	
	for (int i = 0; t[i] != 0; i++) {
		t[i] += 32;
		cout << t[i];
	}

	cout << "\n";


	system("pause");
	return 0;
}