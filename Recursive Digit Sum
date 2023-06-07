/* Recursive Digit Sum
Input:
n='9875'
k=4

Output:
8

Example :
superDigit(p) = superDigit(9875987598759875)
                  9+8+7+5+9+8+7+5+9+8+7+5+9+8+7+5 = 116
    superDigit(p) = superDigit(116)
                  1+1+6 = 8
    superDigit(p) = superDigit(8)
    
Function Description:
superDigit has the following parameter(s):
(i)string n: a string representation of an integer
(ii)int k: the times to concatenate n to make p 
*/

#include <iostream>
#include <string>
using namespace std;

int superDigit(string n, int k) {
    long long int sum = 0; // used when the input is of large size such as 3546630947312051453014172159647935984478824945973141333062252613718025688716704470547449723886626736 and k value 100000
    for (char c : n) {
        sum += c - '0';
    }
    sum *= k;

    while (sum >= 10) {
        long long int temp = sum;
        sum = 0;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }

    return sum;
}

int main() {
    string n;
    cin >> n;
    int k;
    cin >> k;
    cout << superDigit(n, k);
}
