#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long ll;

int getIthBit(int num, int ithBit)
{
    int mask = (1 << ithBit);
    int value = num & mask;
    return value > 0 ? 1 : 0;
}

void setIthBit(int &num, int ithBit)
{
    int mask = (1 << ithBit);
    num = num | mask;
}

void clearIthBit(int &num, int ithBit)
{
    int mask = ~(1 << ithBit);
    num = num & mask;
}

int countSetBits(int num)
{
    //Complexity = O(number of bits)
    int count = 0;
    while (num > 0)
    {
        count += (num & 1);
        num = num >> 1;
    }
    return count;
}

int countSetBitsFast(int num)
{
    //Complexity = O(number of set bits)
    int count = 0;
    while (num > 0)
    {
        ++count;
        num = num & (num - 1); //This just basically removes the last set bit of the number
    }
    return count;
}   

void swapNumbersWithXor()
{
    cout<<"\nDemonstrating swapping with XOR\n";
    int a = 5, b = 7;
    cout<<"Previous values of a and b = "<<a<<" "<<b<<"\n";
    a = a^b;
    b = b^a;
    a = a^b;
    cout<<"After swapping values of a and b = "<<a<<" "<<b<<"\n";

}

void printSequence(string input, int num){
    int i=0;
    while(num>0){
        (num&1)?cout<<input[i]:cout<<"";
        num = num>>1;
        ++i;
    }
}

void generateSubsequences(string input){
    int length = input.size();
    int range = (1<<length)-1;
    for(int i=0;i<=range;i++){
        printSequence(input,i);
    }
}

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int ithBit;
    cin >> ithBit;

    cout << getIthBit(n1, ithBit) << "\n";

    cout << "Previous value of n2 = " << n2 << "\n";
    setIthBit(n2, ithBit);
    cout << "After setting " << ithBit << " bit = " << n2 << "\n";

    cout << "Previous value of n3 = " << n3 << "\n";
    clearIthBit(n3, ithBit);
    cout << "After clearing " << ithBit << " bit = " << n3 << "\n";

    int number;
    cin >> number;
    cout << "Number of set bits with normal method  = " << countSetBits(number) << "\n";
    cout << "Number of set bits with fast method = " << countSetBitsFast(number) << "\n";
    cout << "Number of set bits with builtin function = " << __builtin_popcount(number) << "\n";

    swapNumbersWithXor();

    /*
    Generating Subsequences with Bitmasking
    */
    string inp="abc";

    generateSubsequences(inp);



}