/*Pattern for N = 4

   1
  23
 345
4567

The dots represent spaces.
*/

#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    int i=1;
    int k=1;
    
    
    
    
    while(i<=n)
    {
        k=i;
        int j=1;
        while(j<=n)
        {
            if(i+j<=n)
            {
               cout << " "; 
               j++;
            }
            
            else
            {
                cout << k;
                k++;
                j++;
            }
        }
        cout << endl;
        i++;
    }
  
}


