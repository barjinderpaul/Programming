#include <bits/stdc++.h>
using namespace std;
 void printQueue(queue<int> Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
 void reverseQueue(queue<int>& q)
{
    if (q.empty())
        return;
    int data = q.front();
    q.pop();
    reverseQueue(q);
    q.push(data);
}
 
int main()
{
    queue<int> Queue;
    for(int i=10;i<250;i+=35)
    	Queue.push(i);
	reverseQueue(Queue);
    printQueue(Queue);
}
