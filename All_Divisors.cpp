// Finding all the divisors of a number and in sorted way
#include <iostream>
#include <cmath>
using namespace std; 
#define ll long long 
 
 void printDivisors(int n)
 {
     int i;
     for(i=1; i*i<n; i++)
        if(n%i==0)
            cout<<i<<endl;
     for(;i>=1; i--)
        if(n%i==0)
            cout<<(n/i)<<endl;
 }


 int main(){ 
      int n;
      cin>>n;
      printDivisors(n);
return 0;
}