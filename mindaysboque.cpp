#include <iostream>
#include <climits>
using namespace std;

bool isPossible(int arr[], int n, int m, int k, int day)
{
    int flowers = 0;
    int bouquets = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= day)
        {
            flowers++;
        }
        else
        {
            bouquets += flowers / k;
            flowers = 0;
        }
    }

    bouquets += flowers / k;

    return bouquets >= m;
}

int minDays(int arr[], int n, int m, int k)
{
    if ((long long)m * k > n)
        return -1;

    int low = INT_MAX;
    int high = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        low = min(low, arr[i]);
        high = max(high, arr[i]);
    }

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isPossible(arr, n, m, k, mid))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}

int main()
{
    int arr[] = {1, 10, 3, 10, 2};
    int n = 5;
    int m = 3;
    int k = 1;

    cout << "Minimum Days = " << minDays(arr, n, m, k);

    return 0;
}