#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) 
{
    int answer = 0;
    for(int i=1; i<my_string.size(); ++i)
    {
        std::string s=my_string.substr(0,i);
        if(s==is_prefix)
        {
            return 1;
        }
    }
    
    return answer;
}