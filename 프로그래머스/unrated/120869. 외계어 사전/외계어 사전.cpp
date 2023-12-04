#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> spell, vector<string> dic) 
{
    int answer = 2;
    std::string temp;
    for(int i=0; i<spell.size(); ++i)
    {
        temp+=spell[i];
    }
    std::sort(temp.begin(),temp.end());
    
    for(int i=0; i<dic.size(); ++i)
    {
        std::sort(dic[i].begin(),dic[i].end());
        
        if(dic[i]==temp)
        {
            answer=1;
        }
    }
    
    return answer;
}