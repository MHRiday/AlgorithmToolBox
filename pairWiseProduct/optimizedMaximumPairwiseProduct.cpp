#include<iostream>
#include<vector>
using namespace std;

long long optimizedMaximumPairwiseProduct(const vector<int>&numbers)
{
    int n = numbers.size();

    int index = -1;
    for(int i = 0 ;i < n;++i)
        if((index == -1) || (numbers[i] > numbers[index]))
        {
            index = i;
        }
    int index1 = -1;
    for(int j = 0;j < n;++j)
    {
        if((j != index1) && ((index1 == -1 )||(numbers[j] > numbers[index1])))
        {
            index1 = j;
        }
    }
    return (long long)(numbers[index]*numbers[index1]);
}
int main()
{
    int n;
    cin >> n;
    vector<int>number(n);
    for(int i = 0;i < n;i++)
        cin >> number[i];

    long long result = optimizedMaximumPairwiseProduct(number);

    cout << result <<endl;
    return 0;

}
