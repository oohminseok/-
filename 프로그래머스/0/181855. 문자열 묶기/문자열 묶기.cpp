#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) 
{
    int answer = 0;
    std::vector<std::string> v;
    int n=1;
    
    for (int i = 0; i < strArr.size(); ++i)
    {
        int n = strArr[i].size();
        for (int j = i; j < strArr.size(); ++j)
        {
            if (n == strArr[j].size())
            {
                v.push_back(strArr[j]);
            }
        }

        if (v.size() >answer)
        {
            answer = v.size();
        }
        v.clear();
    }
  
    return answer;
}