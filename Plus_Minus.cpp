/*
Input Format:
The first line contains an integer, n, the size of the array.
The second line contains n space-separated integers that describe arr[n].

Output Format:
Print the following 3 lines, each to 6 decimals:
1.proportion of positive values
2.proportion of negative values
3.proportion of zeros

Function Description:
plusMinus has the following parameter(s):
int arr[n]: an array of integers
*/

#include<iostream>
using namespace std;

void plusMinus(int n,int arr[])
{
    int c_positives=0;
    int c_negatives=0;
    int c_zeroes=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        c_zeroes++;
        else if(arr[i]>0)
        c_positives++;
        else if(arr[i]<0)
        c_negatives++;
    }
    float r1=(float)c_positives/(float)n;
    float r2=(float)c_negatives/(float)n;
    float r3=(float)c_zeroes/(float)n;
    printf("%.6f\n",r1);// printing the float values upto 6 digits after the decimal
    printf("%.6f\n",r2);
    printf("%.6f\n",r3);
}

int main ()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   } 
   plusMinus( n, arr);
}
