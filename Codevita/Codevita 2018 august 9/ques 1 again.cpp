#include<iostream>
#include<vector>
using namespace std;
const int findPrimeLargest = 100001;
vector<long long> allPrimes;
void preCalculatePrimes()
{
	long long isPrime[findPrimeLargest+1];
	for (long long i = 2; i<= findPrimeLargest; i++)
	{
		if (isPrime[i] == 0)
		{
			allPrimes.push_back(i);
			for (long long j = 2; i * j<= findPrimeLargest; j++)
				isPrime[i * j]= 1;
		}
	}
}
long long modd(long long inputNumber)
{
	long long count = inputNumber;
	for (long long i=0; allPrimes[i]*allPrimes[i] <= inputNumber; i++)
	{
		if (inputNumber % allPrimes[i]== 0)
		{
			count = count - (count / allPrimes[i]);
			while (inputNumber % allPrimes[i]== 0)
				inputNumber /= allPrimes[i];
		}
	}
	if (inputNumber > 1)
	count = count- (count / inputNumber);
	return count;
}

int main()
{

	preCalculatePrimes();
		unsigned long long int inputNumber;
	std::cin>>inputNumber;
	if((inputNumber)%2==0 || (inputNumber)%3==0 || (inputNumber)%5==0 || (inputNumber)%7==0 || (inputNumber)%11==0 || (inputNumber)%13==0 ){
		if(inputNumber<=1000000000){
			std::cout<<modd(inputNumber);
	return 0;
}}}

