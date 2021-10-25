#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cin>> n;
    int b[100];
   
    for (int i = 0; i < n; i++)
    {
        cin>> b[i];
    }

    cin>> a;

    for (int j = 0; j < n; j++)
    {
        if (b[j]==a)
        {
          cout << "the number "<< b[j] << " is found at " <<j+1 << "position." ; 
        }
        
    }
    return 0;
    
}