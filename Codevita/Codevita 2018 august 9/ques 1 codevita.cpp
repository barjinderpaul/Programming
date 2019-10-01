#include<iostream>
using namespace std;

int greatestCommonDivisor(int no01, int no02)
{
	if (no01 == 0)
		return no02;
	return greatestCommonDivisor(no02 % no01, no01);
}


int modd(unsigned long long int inputNumber)
{
	unsigned long long int count = 1;
	for (unsigned int i = 2; i < inputNumber; i++)
	
		if (greatestCommonDivisor(i, inputNumber) == 1)
			count++;
	return count;
}
int main()
{
	unsigned long long int inputNumber;
	std::cin>>inputNumber;
	if((inputNumber)%2==0 || (inputNumber)%3==0 || (inputNumber)%5==0 || (inputNumber)%7==0 || (inputNumber)%11==0 || (inputNumber)%13==0 ){
		if(inputNumber<=1000000000){

	std::cout<<modd(inputNumber);
	}}
	return 0;
}

