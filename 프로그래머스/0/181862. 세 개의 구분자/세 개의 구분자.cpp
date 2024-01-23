#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) 
{
    vector<string> answer;
    std::string s;
    for(int i=0; i<myStr.size(); ++i)
    {
        if(myStr[i]=='a'||myStr[i]=='b'||myStr[i]=='c')
        {
            if(s.size()==0)
            {
                continue;
            }
            else
            {
                answer.push_back(s);
                s.clear();
            }
        }
        else
        {
            s+=myStr[i];
        }
    }
    
    if(s.size()!=0)
    {
        answer.push_back(s);
    }
    else
    {
        answer.push_back("EMPTY");
    }
    return answer;
}