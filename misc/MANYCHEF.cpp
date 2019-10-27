/**
 * January Cook-Off 2013
 *
 * Problem:     MANYCHEF - Many Chefs
 * Author:      Anton Lunyov (Tester)
 * Complexity:  O(|S|) per test
 * Timing:      0.24 out of 2.013
 *
 * Description:
 * We traverse the string from the end and try to place CHEF at every position.
 * If it is possible we do this and skip 4 characters, otherwise
 * if the character is '?' we replace it by 'A' and move to the next character.
 */
#include <iostream>
#include <string>
using namespace std;

inline bool CHEF(char C, char H, char E, char F)
{
	return (C=='?' || C=='C') && (H=='?' || H=='H') && (E=='?' || E=='E') && (F=='?' || F=='F');
}

int main()
{
	int T;
	cin >> T;
	for (int t = 0; t < T; ++t)	{
		string s;
		cin >> s;
		int n = s.length();
		for (int i =  n - 1; i >= 0;) {
			// if substring s[i-3..i] matches "CHEF"
			if (i>=3 && CHEF(s[i-3], s[i-2], s[i-1], s[i])) {
				// we set characters in it as in "CHEF"
				s[i-3] = 'C';
				s[i-2] = 'H';
				s[i-1] = 'E';
				s[i-0] = 'F';
				// and move to the position i-4
				i -= 4;
			} else {
				// otherwise if we have '?' we replace it by 'A'
				if (s[i] == '?') {
					s[i] = 'A';
				}
				--i;
			}
		}
		cout << s << endl;
	}
	return 0;
}
