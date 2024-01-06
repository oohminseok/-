#include <string>
#include <vector>

using namespace std;

string solution(string myString) 
{
    std::string answer;
    for(auto&e:myString)
    {
        if(std::isupper(e))
        {
            answer+=std::tolower(e);
        }
        else
        {
            answer+=e;
        }
    }
    return answer;
}