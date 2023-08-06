/*
When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently. For example:
Example
h=[1,3,1,3,1,4,1,3,2,5,5,5,5,1,1,5,5,1,5,2,5,5,5,5,5,5]
word='torn'
The heights are t=2,o=1,r=1 and n=1. The tallest letter is 2 high and there are 4 letters. The hightlighted area will be 2*4=8mm2 so the answer is 8.
*/
import java.io.*;
import java.util.*;
public class Solution
{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int arr[]=new int[26];
        for(int i=0;i<26;i++)
        {
            arr[i]=sc.nextInt();
        }
        
        String word=sc.next();
        
        char alpha[]=new char[26];
        int x=0;
        for(char c='a';c<='z';c++)
        {
            alpha[x]=c;
            x++;
        }
        
        int max=0;
        int c_max=0;
       
        for(int i=0;i<word.length();i++)
        {
            for(int j=0;j<26;j++)
            {
                if(word.charAt(i)==alpha[j])
            {
                c_max=arr[j];
                if(c_max>max)
                {
                    max=c_max;
                }
            }
            }
        }
        int area=max*word.length();
        System.out.println(area);
    }
}
