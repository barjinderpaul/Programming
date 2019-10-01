#include<bits/stdc++.h>
using namespace std;
int precedence(char ch);
string solve(string infix);

int main(){
    string s;
    cin>>s;
    cout<<solve(s);
}
int precedence(char ch){
    if(ch=='^')
        return 3;
    else if(ch=='/' || ch=='*')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return -1;
}
string solve(string infix) {
    string postfix="";
    stack<char>evaluate;
    evaluate.push('Z');
    for(int i=0;i<infix.length();i++){
        cout<<"final string = "<<postfix<<"\n";
        cout<<"evaluate.top() = "<<evaluate.top()<<"\n";
        char curr = infix[i];
        cout<<"curr element = "<<curr<<"\n";
        if ( (curr>='a' && curr<='z'))
            postfix+=curr,cout<<"pushed in string\n";
        else if(curr=='(')
            evaluate.push('('),cout<<"pushed parenthesis\n";
        else if(curr==')'){
            while(evaluate.top()!='Z' && evaluate.top()!='('){
                cout<<"adding in string = "<<evaluate.top()<<"\n";
                postfix+=evaluate.top();
                evaluate.pop();
            }
            evaluate.pop();
        }
        else {
           // cout<<"precedence[curr]  = "<<precedence[curr]
            while(evaluate.top()!='Z' && precedence(curr)<=precedence(evaluate.top())){
                cout<<"adding in precedence = "<<evaluate.top()<<"\n";
                postfix+=evaluate.top();
                evaluate.pop();
            }
            cout<<"pushed after precedence = "<<curr<<"\n";
            evaluate.push(curr);
        }

    }
    while(evaluate.top()!='Z')
        postfix+=evaluate.top(),evaluate.pop();
    return postfix;
}
