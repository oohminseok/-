#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) 
{
   int answer=str1.find(str2);
    
    if(answer>=0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}