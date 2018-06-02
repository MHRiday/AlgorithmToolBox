#include<iostream>
using namespace std;

int carFueling(int A[],int n,int capacity)
{
    int numRefills = 0,currentRefills = 0;
    while(currentRefills < n)
    {
        int lastRefills = currentRefills;
        while(currentRefills < n && ((A[currentRefills+1] - A[lastRefills]) <= capacity))
        {
            currentRefills = currentRefills + 1;
            cout << "currentRefills " <<currentRefills << endl;
        }
        if(currentRefills == lastRefills)
                cout << " Something went wrong" << currentRefills << " And " << lastRefills <<endl;
        if(currentRefills < n)
            numRefills = numRefills + 1;
            cout << " numRefills " << numRefills << endl;
    }


    return numRefills;
}

int main()
{
    int c,capacity,n;
    cout << "Input number of iterations " <<endl;
    cin >> n;
    cout << "Input Capacity "<<endl;
    cin >> capacity;
    int a[n];
    for(int i = 0;i <= n ;i++) cin >> a[i];
    int numberOfRefills = carFueling(a,n,capacity);
    cout << "Number of Refills :" << numberOfRefills <<endl;

}
