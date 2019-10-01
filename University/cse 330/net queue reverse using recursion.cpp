#include <bits/stdc++.h>
using namespace std;
 void printQueue(queue<long long int> Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
 void reverseQueue(queue<long long int>& q)
{
    if (q.empty())
        return;
    long long int data = q.front();
    q.pop();
    reverseQueue(q);
    q.push(data);
}
 
int main()
{
    queue<long long int> Queue;
    for(int i=10;i<200;i+=25)
    	Queue.push(i);
	reverseQueue(Queue);
    printQueue(Queue);
}
