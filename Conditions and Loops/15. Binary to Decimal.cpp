/*

Given a binary number as an integer N, convert it into decimal and print.

Input format :
An integer N in the Binary Format

Output format :
Corresponding Decimal number (as integer)

Constraints :
0 <= N <= 10^9

Sample Input 1 :
1100

Sample Output 1 :
12

Sample Input 2 :
111

Sample Output 2 :
7

*/


#include<bits/stdc++.h>
using namespace std;

int power(int ,int);

int main() {
    int n;
    cin >> n;
    int i=0;
    int c=0;
    
    while(n>0)
    {
        int rem=n%10;
        c+=power(2,i)*rem;
        i++;
        n=n/10;
    }
    
    cout << c;
}

int power(int a,int b){
	int c = round(pow(a,b));
    return c;
}
	
