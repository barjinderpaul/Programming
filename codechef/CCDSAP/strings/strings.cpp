#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int lastMatch(string text, string pattern){
	
}

/*
functions discussed:
1. constructor:
	string s1("hello world");
	string s2(s1,0,4);
	string s3(10,'0');
	
2. length:
	s1.length()
	s1.size()
	
3. chars at specific position:
	s1.at(2); //equals s1[2]	
	s1.front();	//equals s1[0]
	s1.back();	//equals s1[s1.length()-1]
	
4. converting string to charString:
	const char* charstr = s1.c_str();
	now, we can use functions like : strcmp() etc
	
5. find/text-pattern matching:
	string text("Abab");
	string pattern("ab");
	if(text.find(pattern)!=string::npos)
		cout<<"pattern found at "<<text.find(pattern)"<<endl;
	else
		cout<<"Not found"<<endl;
		
6. replace
	string toBeReplaced("I will be replaced");
	toBeReplaced.replace(0,toBeReplaced.length()-1,"replaced");

7. append:
	string s("hello");
	s.append(" world"); //hello world

8. substr:
	string s("hello subs");
	s.substr(1,4);

9. clear:
	s.clear();

10. erase:
	s.erase(s.begin()+2,s.end()-5);
	s.erase(5,6); //from 5th pos 6 chars
	
*/

int main(){
	string str1="hello";
	string str2=" world";
	cout<<str1+str2<<endl;
	
	string s = str1;
	//cout<<s<<"" "<<s.size()<<endl;
	
	char s1[6]="hello";
	char s2[6]="hello";
	if(!strcmp(s1,s2))	//strcmp() returns 0 if strings are same
		cout<<"same strings"<<endl;
	else
		cout<<"not same"<<endl;
	
	//string class
	
	//1. constructor;
	string str("hello world");
	cout<<str<<endl;
	string strr(str);
	cout<<strr<<endl;
	
	//init by char :
	string zeroes(10,'0');
	cout<<zeroes<<endl;
	
	//from other string;
	string fromCopy("Thisisastring");
	string toCopy(fromCopy,2,5); //from 2nd char till 2+5 chars
	cout<<toCopy<<endl;
	
	//size/length:
	cout<<toCopy.length()<<" same as "<<toCopy.size()<<endl;
	
	//chars at specific position:
	string customChar("higit");
	char charAt3rd = customChar.at(2); 
	//same as : char charAt3rd = customChar[2];
	cout<<charAt3rd<<endl;
	cout<<customChar.front()<<endl;
	cout<<customChar.back()<<endl;
	
	//making string into c-type char array:
	const char* charstr = customChar.c_str();
	cout<<charstr<<endl;
	string cmp("higit");
	const char* charstr2 = cmp.c_str();
	if(!strcmp(charstr,charstr2))
		cout<<"same strings"<<endl;
	else
		cout<<"not same"<<endl;
		
	//appending
	string appendString("Something will append with me");
	appendString.append(" to append");
	cout<<appendString<<endl;
	
	string toAppend("I will be appended");
	appendString.append(toAppend,7,5); //from 7th char 5 chars of toAppend 
	cout<<appendString<<endl;
	
	//find in string:
	//pattern matching also:
	
	string text("AABABAB");
	string pattern("AB");
	
	if(text.find(pattern)!=string::npos){
		cout<<"Pattern at found at pos = "<<text.find(pattern)<<endl;
	}else{
		cout<<"Pattern not found"<<endl;
	}	
	
	//last occurance of pattern match:
	cout<<lastMatch(text,pattern)<<endl;
		
	//substring:
	string mainString("I am a main string");
	string subString("I am a sub string");
	cout<<subString.substr(2,9)<<endl;
	
	//replace
	string toBeReplaced("I, the string will be replaced");
	toBeReplaced.replace(3,toBeReplaced.size()-1,"replaced");
	cout<<toBeReplaced<<endl;
	

}
