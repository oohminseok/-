#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) 
{
    vector<int> answer;
    
    for(int i=l; i<=r; ++i)
    {
        std::string temp=std::to_string(i);
        bool ok=false;
        for(int i=0; i<temp.size(); ++i)
        {
            if(temp[i]=='0'||temp[i]=='5')
            {
                ok=true;
            }
            else
            {
                ok=false;
                break;
            }
        }
        if(ok)
        {
            answer.push_back(i);
        }
    }
    
    if(answer.size()==0)
    {
        answer.push_back(-1);
    }
    
    return answer;
}