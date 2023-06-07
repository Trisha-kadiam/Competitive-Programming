/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.
Input Format:
A single line of five space-separated integers eg. 1 2 3 4 5

Output Format:
Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers.
Important point :(The output can be greater than a 32 bit integer.) therefore use long long data type instead of integer data type
eg:10 14

Explanation:
The numbers are 1, 2, 3, 4, and 5. Calculate the following sums using four of the five integers:
Sum everything except 1, the sum is 2+3+4+5=14.
Sum everything except 2, the sum is 1+3+4+5=13.
Sum everything except 3, the sum is 1+2+4+5=12.
Sum everything except 4, the sum is 1+2+3+5=11.
Sum everything except 5, the sum is 1+2+3+4=10.
Hints: Beware of integer overflow! Use 64-bit Integer
*/
#include<iostream>
#include<limits.h>
using namespace std;
//four integer sum ---> min and max
void miniMaxSum(int arr[])
{
    long long min_sum=LLONG_MAX;//use long long data type for big input values
    long long max_sum=LLONG_MIN;
    long long sum=0;
    for(int i=0;i<5;i++)
    {
        sum=0;
       for(int j=0;j<5;j++)
       {
           if(j!=i)
           sum=sum+arr[j];
       } 
       if(sum>=max_sum)
       max_sum=sum;
       
       if(sum<=min_sum)
       min_sum=sum;
    }
    cout<<min_sum<<" "<<max_sum;
}

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    miniMaxSum(arr);
}
