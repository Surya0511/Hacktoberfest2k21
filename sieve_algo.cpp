// This is the Sieve of Eratosthenes algorithm to find all prime number till an input number
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std; 
#define ll long long 

void sieve(int n)
{
    vector <bool> isPrime(n+1, true);
    for(int i = 2; i <= n; i++)
    {
        if(isPrime[i])
        {
            cout<<i<<" ";
            for(int j = i * i; j <= n; j = j + i)
                isPrime[i] = false;
        }
    }
}
 
 int main(){ 
      ios::sync_with_stdio(false);
      cin.tie(NULL) ;
      int n;
      cin>>n;
      sieve(n);
return 0;
}