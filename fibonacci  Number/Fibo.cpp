#include<iostream>
using namespace std;

long long fibo(int n)
{
    int f[n];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2;i <=n ;i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return (long long)f[n];
}

int main()
{
    cout << "Enter a number " <<endl;
    int n;
    cin >> n;
    long long result = fibo(n);
    cout << result <<endl;
}
