#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) 
{
    vector<string> answer;
    std::string temp;
    int n=0;
    
    for(int i=0; i<str_list.size(); ++i)
    {
        std::string temp=str_list[i];
        if(temp=="l")
        {
            for(int j=0; j<i; ++j)
            {
                temp=str_list[j];
                answer.push_back(temp);
            }
            break;
        }
        else if(temp=="r")
        {
            for(int j=i+1; j<str_list.size(); ++j)
            {
                temp=str_list[j];
                answer.push_back(temp);
            }
            break;
        }
    }
    
    return answer;
}