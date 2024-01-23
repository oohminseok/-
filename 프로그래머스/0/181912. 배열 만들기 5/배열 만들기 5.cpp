#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) 
{
    vector<int> answer;
    int number=0;
    
    for(int i=0; i<intStrs.size(); ++i)
    {
        number=std::stoi(intStrs[i].substr(s,l));
        if(k<number)
        {
            answer.push_back(number);
        }
    }
    
    return answer;
}