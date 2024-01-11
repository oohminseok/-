#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) 
{
    string answer = "";
    for(auto&e:rny_string)
    {
        if(e=='m')
        {
            answer+="rn";
        }
        else
        {
            answer+=e;
        }
        
    }
    
    return answer;
}