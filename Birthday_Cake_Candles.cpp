/*
Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

Example
scores[12,24,10,24]
Scores are in the same order as the games played. She tabulates her results as follows:
                                Count
Game  Score  Minimum  Maximum   Min Max
     0      12     12       12       0   0
     1      24     12       24       0   1
     2      10     10       24       1   1
     3      24     10       24       1   1
Sample Input 1

10
3 4 21 36 10 28 35 5 24 42
Sample Output 1

4 0
*/

#include <iostream>
using namespace std;

void score_breaking(int n, int arr[], int *a)
{
    int cmin = arr[0];
    int cmax = arr[0];
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > cmax)
        {
            cmax = arr[i];
            max = max + 1;
        }

        if (arr[i] < cmin)
        {
            cmin = arr[i];
            min++;
        }
    }
    a[0] = max;
    a[1] = min;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a[2];
    for (int i = 0; i < 2; i++)
    {
        a[i] = 0;
    }
    score_breaking(n, arr, a);

    for (int i = 0; i < 2; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
