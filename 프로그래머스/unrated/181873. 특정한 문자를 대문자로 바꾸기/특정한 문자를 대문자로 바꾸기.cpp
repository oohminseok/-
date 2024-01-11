#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) 
{
    std::string answer="";
    for(auto&e:my_string)
    {
        if(e==alp[0])
        {
            answer+=std::toupper(e);
        }
        else
        {
            answer+=e;
        }
    }
    
    return answer;
}