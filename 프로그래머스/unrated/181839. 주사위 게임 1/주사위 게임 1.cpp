#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    if(a%2==1&&b%2==1)
    {
        return (a*a)+(b*b);
    }
    else if(a%2==1||b%2==1)
    {
        return 2*(a+b);
    }
    else if(a%2!=1&&b%2!=1)
    {
        return std::abs(a-b);
    }
}