#include <iostream> 
using namespace std; 
  
// calculate the maximum stolen value 
int maxLoot(int *hval, int n) 
{ 
    if (n == 0) 
        return 0; 
    if (n == 1) 
        return hval[0]; 
    if (n == 2) 
        return max(hval[0], hval[1]); 
  
    // dp[i] represent the maximum value stolen 
    // so far after reaching house i. 
    int dp[n]; 
  
    // Initialize the dp[0] and dp[1] 
    dp[0] = hval[0]; 
    dp[1] = max(hval[0], hval[1]); 
    dp[2] = max(hval[0],dp[1]);
    dp[3] = max(hval[0],dp[2]);
    dp[4] = max(hval[0],dp[3]);
  
    // Fill remaining positions 
    for (int i = 5; i<n; i++) 
        dp[i] = max(hval[i]+dp[i-2]+dp[i-3]+dp[i-4], dp[i-1]); 
  
    return dp[n-1]; 
} 
  
// Driver to test above code 
int main() 
{ 
    int hval[] = {1000,2000,3000,5000,9000,7000,6000,4000,7000,5000}; 
    int n = sizeof(hval)/sizeof(hval[0]); 
    cout << "Maximum loot possible : "
        << maxLoot(hval, n); 
    return 0; 
} 
