#include<bits/stdc++.h>
using namespace std;

int lcs(string a, string b, int i, int j)
{
    if (i == 0 || j == 0)
        return 0;
    
    if (a[i - 1] == b[j - 1])
        return 1 + lcs(a, b, i - 1, j - 1);
    
    return max(lcs(a, b, i - 1, j), lcs(a, b, i, j - 1));
}

int lcs_tab(string a, string b, int i, int j)
{
    int DP[i + 1][j + 1];
    
    for (int x = 0; x <= i; ++x)
    {
        for (int y = 0; y <= j; ++y)
        {
            if (x == 0 || y == 0)
                DP[x][y] = 0;
            else if (a[x - 1] == b[y - 1])
                DP[x][y] = DP[x - 1][y - 1] + 1;
            else
                DP[x][y] = max(DP[x - 1][y], DP[x][y - 1]);
        }
    }
    
    return DP[i][j];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int T;
	string a;
	string b;
	int i;
	int j;
	
	cin >> T;
	
	while (T--)
	{
	    cin >> i >> j;
	    
	    cin.ignore(1, '\n');
	    
	    getline(cin, a);
	    getline(cin, b);
	    
	    cout << lcs_tab(a, b, i, j) << "\n";
	}
	
	return 0;
}
