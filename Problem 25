#include<iostream>

using namespace std;

int FindDigit(long long num)
{
    int count = 0;
    while(num!=0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
int Fibbonacci()
{
    long long Fn1 = 1, Fn2 = 1;
    int count1 = 0;
    long long Fn;
    for(Fn = 0; FindDigit(Fn) != 1000;)
    {
        Fn = Fn1 + Fn2;
        Fn1 = Fn2;
        Fn2 = Fn;
        count1++;  
    }
    return count1;
}

int main()
{
    cout<<Fibbonacci();
   
}


