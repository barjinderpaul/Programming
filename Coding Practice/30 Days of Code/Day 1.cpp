#include<bits/stdc++.h>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int integer;
    double floating;
	std::string stringg;
    // Read and save an integer, double, and String to your variables.
    cin>>integer;
    cin>>floating;
    cout<<"a";
	std::getline(std::cin,stringg);
	 
	 // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout<<integer+i<<endl;
    // Print the sum of the double variables on a new line.
    cout<<d+ double(floating)<<endl;
    // Concatenate and print the String variables on a new line
    cout<<s;
    cout<<stringg;
    // The 's' variable above should be printed first.
    return 0;
}
