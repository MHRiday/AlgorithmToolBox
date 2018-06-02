#include<iostream>
#include<vector>
using namespace std;

int maximum_pairwise_product(const vector<int>& number)
{
    int result = 0;
    int n = number.size();
    for(int i = 0;i<n;i++)
        for(int j = i+1;j<n;j++)
        {
            if(number[i] * number[j] > result)
            {
                result = number[i] * number[j];
            }
        }
    return result;

}
int main()
{
    int n;
    cin >> n;
    vector<int>number(n);
    for(int i = 0;i < n;i++)
        cin >> number[i];

    int result = maximum_pairwise_product(number);
    cout << result <<endl;
    return 0;

}
