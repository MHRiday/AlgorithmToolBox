#include<iostream>
using namespace std;
int naiveGcd(int a,int b)
{
 int best = 0;
 for(int i = 1;i < a+b ;i++)
 {
     if(a%i ==0 and b %i ==0)
     {
         best = i;
     }
 }
 return best;
}

int main()
{
    int a,b;
    cin >> a >> b;
    int result = naiveGcd(a,b);
    cout << result <<endl;
}
