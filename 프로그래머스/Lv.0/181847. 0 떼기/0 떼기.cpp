#include <string>
#include <vector>

using namespace std;

string solution(string n_str) 
{
    string answer = "";
    bool ok=false;
    
    for(auto&e:n_str)
    {
        if(e=='0')
        {
            if(ok)
            {
                answer+=e;
            }
            else
            {
                continue;
            }
        }
        else if(e!='0')
        {
            ok=true;
            answer+=e;
        }
    }
    
    return answer;
}