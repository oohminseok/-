#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) 
{
    vector<int> answer;
    
    if(k%2!=0)
    {
        for(auto&e:arr)
        {
            answer.push_back(e*=k);
        }
    }
    else
    {
         for(auto&e:arr)
        {
            answer.push_back(e+=k);
        }
    }
    
    return answer;
}