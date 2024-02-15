#include <string>
#include <vector>

using namespace std;

bool solution(string s) 
{
    bool answer = true;
    
    if(s.size()==4||s.size()==6)
    {
        for(char i=65; i<=122; ++i)
        {
            for(int j=0; j<s.size(); ++j)
            {
                if(i==s[j])
                {
                    answer=false;
                    return answer;
                }
            }
        }
    }
    else
    {
        return false;
    }
    
    return answer;
}