#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) 
{
    int answer = n;
    
    for(auto&e:control)
    {
        if(e=='w')
        {
            answer+=1;
        }
        else if(e=='a')
        {
            answer-=10;
        }
        else if(e=='s')
        {
            answer-=1;
        }
        else
        {
            answer+=10;
        }
    }
    
    return answer;
}