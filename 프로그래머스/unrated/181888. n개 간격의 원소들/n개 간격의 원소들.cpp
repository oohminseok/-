#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) 
{
    int index=0;
    vector<int> answer;
    for(int i=0; i<num_list.size(); ++i)
    {
        if(i==index)
        {
            index+=n;
            answer.push_back(num_list[i]);
        }
    }
    
    return answer;
}