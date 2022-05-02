#include <iostream> //RECURSION_1 - Fibonacci
using namespace std;

int fib(int n){
      
      if(n==1||n==0)
      return n;
      return fib(n-1)+fib(n-2); 
}
int main()
{
    int n = 0, i, a, b;
    cout<<"number of terms : ";
    cin>>a;
    for(i=0;i<a;i++)
    {
      b = fib(n);
      cout<<b<<", ";
      n++;
      
    }
    return 0;
}
    
   