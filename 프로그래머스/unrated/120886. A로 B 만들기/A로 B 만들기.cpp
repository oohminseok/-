#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string before, string after) 
{
    std::sort(before.begin(),before.end());
    std::sort(after.begin(),after.end());
    
    if(before==after)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}