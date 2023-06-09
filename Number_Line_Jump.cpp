/*
You are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).
The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
The second kangaroo starts at location x2 and moves at a rate of v2 meters per jump.
You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

Function Description:
Complete the function kangaroo in the editor below.
kangaroo has the following parameter(s):
int x1, int v1: starting position and jump distance for kangaroo 1
int x2, int v2: starting position and jump distance for kangaroo 2

Sample Input 1
0 2 5 3
Sample Output 1
NO
Explanation 1
The second kangaroo has a starting location that is ahead (further to the right) of the first kangaroo's starting location (i.e., x2>x1 ). Because the second kangaroo moves at a faster rate (meaning v2>v1) and is already ahead of the first kangaroo, the first kangaroo will never be able to catch up. Thus, we print NO.
*/

#include<iostream>
#include<string.h>
using namespace std;
string kangaroo(int x1,int v1,int x2,int v2)
{
    if((v1>v2)&&(abs(x2-x1)%abs(v1-v2)==0))
    return "YES";
    else
    return "NO";
}

int main()
{
   int x1,v1,x2,v2;
   cin>>x1>>v1>>x2>>v2;
   cout<<kangaroo(x1,v1,x2,v2);
   
}
