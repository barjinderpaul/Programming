// CPP program to reverse a Queue
#include <bits/stdc++.h>
using namespace std;
void Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
void reverseQueue(queue<int>& Queue)
{
    stack<int> Stack;
    while (!Queue.empty()) {
        Stack.push(Queue.front());
        Queue.pop();
    }
    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }
}
int main()
{
    queue<int> Queue;
   	for(int i=0;i<100;i+=20){
   		Queue.push(i);
   	}
     reverseQueue(Queue);
    Print(Queue);
}
