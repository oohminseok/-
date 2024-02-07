#include <string>
#include <vector>

using namespace std;

bool solution(int x) 
{
    bool answer = true;
    std::string s=std::to_string(x);
    int t=0;
    for(int i=0; i<s.size(); ++i)
    {
        std::string s2;
        s2=s[i];
        t+=std::stoi(s2);
    }
    
    if(x%t==0)
    {
        return answer;
    }
    
    return false;
}