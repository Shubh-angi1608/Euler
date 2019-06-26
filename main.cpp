#include<iostream>

using namespace std;

int main()
{
    int sum = 0;
    int multiples;
    for(int i = 1; i<1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            multiples = i;
            sum = sum + multiples;
        }
    }
    cout<<sum;
}