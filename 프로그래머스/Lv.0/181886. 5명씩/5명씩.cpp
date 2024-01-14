#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) 
{
    vector<string> answer;
    std::vector<std::string> temp;
    
     for (int i = 0; i < names.size(); ++i)
    {
        temp.push_back(names[i]);
        if (temp.size() == 1)
        {
            answer.push_back(temp[0]);
        }
        else if (temp.size() == 5)
        {
            temp.clear();
        }
    }
    return answer;
}