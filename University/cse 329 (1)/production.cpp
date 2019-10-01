#include <bits/stdc++.h>
using namespace std; 
  
#define all(c) c.begin(), c.end() 
typedef pair<int, pair<int, int> > job; 
bool compare(job a, job b) 
{ 
    int firstLoss, firstTime, secondLoss, secondTime; 
    firstLoss = a.second.first; 
    firstTime = a.second.second; 
    secondLoss = b.second.first; 
    secondTime = b.second.second; 
    return (firstLoss * secondTime) > (secondLoss * firstTime); 
} 
  
void returnAns(int Losses[], int timeTaken[], int N) 
{ 
    vector<job> sequenceList;
    for (int index = 0; index < N; index++) { 
        int tempTime = timeTaken[index]; 
        int tempLoss = Losses[index]; 
        sequenceList.push_back(pairOfLossTime(index + 1, pairOfLossTime(tempLoss, tempTime))); 
    } 
    stable_sort(all(sequenceList), compare); 
    for (int index = 0; index < N; index++)  
        cout << sequenceList[index].first -1<< " ";    
} 
int main() 
{ 
    int input,index,Losses[1000],timeTaken[1000];
    cin>>input;
    for(index=0;index<input;index++)
    {
        cin>>Losses[index]>>timeTaken[index];
    }
    returnAns(Losses, timeTaken, input); 
    return 0; 
}
