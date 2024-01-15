#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) 
{
    vector<int> answer;
    int count=0;
    
    for(auto&e:myString)
    {
        if(e!='x')
        {
            ++count;
        }
        else if(e=='x')
        {
            answer.push_back(count);
            count=0;
        }
    }
    answer.push_back(count);
    
    return answer;
}