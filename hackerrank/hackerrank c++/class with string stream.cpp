#include<bits/stdc++.h>
#include<string>

using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
        int age,standard;
        string first_name,last_name;
   public:
        void set_age(int a){
            age=a;
        }
        int get_age(){
            return  age;
        }
        void set_standard(int s){
            standard=s;
        }
        int get_standard(){
            return standard;
        }
        void set_first_name(string f){
            first_name=f;
        }
        string get_first_name(){
            return first_name;
        }
        void set_last_name(string l){
            last_name=l;
        }
        string get_last_name(){
            return last_name;
        }
        string to_string(){
			ostringstream str1;
			str1<<age;
			string sage=str1.str();
			str1.str("");
			str1<<standard;
			string sstandard=str1.str();
        	string withCommas=sage+first_name+last_name+sstandard;
            stringstream ss;
            return sage+","+first_name+","+last_name+","+sstandard;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
