/*
Given an array of integers and a positive integer k, determine the number of (i,j) pairs where (i<j) and ar[i] + ar[j] is divisible by k.
Example
ar=[1,2,3,4,5,6] k=5
Three pairs meet the criteria:[1,4],[2,3]and [4.6] 

Input Format:
The first line contains 2 space-separated integers, n and k.
The second line contains n space-separated integers, each a value of arr[i].

Output Format:
The number of pairs
*/
import java.io.*;
import java.util.*;
class Solution{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int s=0;
                if(i<j)
                {
                
                   s=s+ arr[i] + arr[j];
                   if(s%k==0)
                   {
                       c++;
                   }
                  
                }
            }
        }
        System.out.println(c);
    }
}
