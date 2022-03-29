#include<iostream>
using namespace std;

int main() {
	char a;
    cin >> a;
 
    if(97<=a && a<=123)
    {
        cout << 0;
    }
    
    else if(65<=a && a<=90)
    {
        cout << 1;
    }
    
    else
        cout << -1;
	
}
