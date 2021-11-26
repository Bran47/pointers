#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[10], sum=0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n >10 || n <= 10)
    {
        cout << "find the average of the numbers" << endl;
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}
