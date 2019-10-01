#include<bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str){
    stringstream ss(str);
    string st;
    vector<int> integerr;
    while(ss>>st){
    	stringstream temp;
    	while(temp){
    		int i;
    		if
					integerr.push_back(i);    		
    	}
    	

	}
        return integerr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
