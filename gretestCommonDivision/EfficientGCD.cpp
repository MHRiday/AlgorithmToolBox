#include<iostream>
using namespace std;
int naiveGcd(int a,int b)
{
 int best = 0;
 if(b == 0)
    return a;
  a =  a % b;
 return naiveGcd(b,a);
}

int main()
{
    int a,b;
    cin >> a >> b;
    int result = naiveGcd(a,b);
    cout << result <<endl;
}

