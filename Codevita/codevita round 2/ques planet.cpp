#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int T;
	cin >> T;
	for(int i = 0; i < T; ++i) {
		int D;
		string P;
		cin >> D >> P;

		int str = 1;
		int dmg = 0;
		vector<int> strTbl;
		for(int j = 0; j < P.size(); ++j) {
			if(P[j] == 'M') str *= 3;
			else if(P[j]== 'S'){
				if(str/2 >= 1)
					str = str/2;
			}
			else dmg += str;
			strTbl.push_back(str);
			
		}

		int count = 0;
		while(dmg > D) {
			int pos = P.rfind("MK");
			if(pos == string::npos) {
				count = -1;
				break;
			}
			++count;
			strTbl[pos] /= 2;
			dmg -= strTbl[pos];
			swap(P[pos], P[pos+1]);
		}

		if(count == -1) cout << "Case #" << i+1 << ": IMPOSSIBLE\n";
		else cout << "Case #" << i+1 << ": " << count << "\n";
	}
}
