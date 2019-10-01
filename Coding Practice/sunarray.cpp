#include<bits/stdc++.h>
using namespace std;
 int subarraySum(int nums[], int k) {
        int count = 0, sum = 0;
        map<int,int> map;
        map.insert(0, 1);
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (map.containsKey(sum - k))
                count += map.get(sum - k);
            map.put(sum, map.getOrDefault(sum, 0) + 1);
        }
        return count;
    }
int main(){
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
}
	
}

