/*
Pattern for N = 4
1
23
345
4567
*/


#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    int i=1;
    int k=1;
    int j=1;
    
    while(i<=n)
    {
        k=i;
        j=1;
        while(j<=i)
        {
            cout << k;
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
  
}


