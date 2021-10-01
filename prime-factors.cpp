#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    while(N % 2 == 0)
    {
        cout << 2 << " ";
        N = N / 2;
    }

    for(int i = 3; i <= sqrt(N); i = i + 2)
    {
        while(N % i == 0)
        {
            cout << i << " ";
            N = N / i;
        }
    }

    if(N > 2)
        cout << N << " ";
    return 0;
} 