#include <bits/stdc++.h>

int main() {
   	std::ios_base::sync_with_stdio(false);
   	std::cin.tie(NULL);
    int n, m;
    std::cin>>n>>m;
    std::map<int, int> counts;
    std::vector<int> input;
    std::vector<bool> visited(m + 1, false);
   	for(int i=0;i<n;i++){
        int val;
        std::cin>>val;
        if(visited[val] == false){
 	        input.push_back(val);
			visited[val] = true;
        }
		counts[val]++;
    }
    std::map<int, std::vector<int> > final;
    for(auto i: input) 
		final[counts[i]].push_back(i);
    for(auto x = final.rbegin(); x != final.rend(); x++) {
       for(auto num: x->second){
            for(int y = 0; y < x->first; y++){
            	 std::cout<<num<<" ";
            }
        }
    }
}

