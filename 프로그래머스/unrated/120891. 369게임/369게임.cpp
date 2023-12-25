#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int order) 
{
    std::string answer = std::to_string(order);
    int count=0;
    for(int i=0; i<answer.size(); ++i)
    {
        if(answer[i]=='3'||answer[i]=='6'||answer[i]=='9')
        {
            ++count;
        }
    }
    return count;
}