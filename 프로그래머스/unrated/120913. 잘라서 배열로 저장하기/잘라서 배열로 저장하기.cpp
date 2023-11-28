#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) 
{
    vector<string> answer;
    std::string temp;
    int number=0;
    for(int i=0; i<my_str.size(); ++i)
    {
        temp+=my_str[i];
        ++number;
        if(number==n)
        {
            answer.push_back(temp);
            temp.clear();
            number=0;
        }
    }
    if(temp.size()>0)
    {
        answer.push_back(temp);
    }
    
    return answer;
}