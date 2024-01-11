#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) 
{
    int answer = 0;
    
    for(int i=0; i<my_string.size(); ++i)
    {
        std::string s=my_string.substr(i,my_string.size());
        if(s==is_suffix)
        {
            return 1;
        }
    }
    return answer;
}