#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int factorial = 1;
   for(int i=1; i<=10; ++i)
   {
       factorial*=i;
       if(factorial==n)
       {
           return i;
       }
       else if(factorial>n)
       {
           return i-1;
       }
   }
}