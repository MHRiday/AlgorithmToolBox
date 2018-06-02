#include<iostream>
using namespace std;

int *multPoly(int A[],int B[],int n)
{
    int i,j;
    int *product = new int[2*n - 1];
    for(int i = 0;i < 2*n -2; i++)
    {
       product[i] = 0;
    }
    for(i = 0;i <= n-1 ;i++)
    {
       for(j = 0;j <= n-1 ;j++)
       {
          product[i+j] = product[i+j] + A[i] * B[j];
       }
    }

    return product;
}

void printPoly(int poly[], int n)
{
    for (int i=0; i<n; i++)
    {
       cout << poly[i];
       if (i != 0)
        cout << "x^" << i ;
       if (i != n-1)
       cout << " + ";
    }
}

int main()
{
   int n;
   cin  >> n;
   int A[n] ,B[n];
   for(int i = 0;i < n;i++)
      cin >> A[i] ;
    for(int j = 0;j < n;j++)
      cin >> B[j];


    int *result = multPoly(A,B,n);
    for(int i = 0 ;i <= n;i++)
        cout << result[i] <<endl;
    cout << "nProduct polynomial is n  ";
    printPoly(result, 2*n-1);

    return 0;

}
