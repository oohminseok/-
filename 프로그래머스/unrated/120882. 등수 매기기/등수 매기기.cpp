#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) 
{
    vector<int> answer;
    std::vector<float> temp;
    for(int i=0; i<score.size(); ++i)
    {
        float avg=static_cast<float>(score[i][0]+score[i][1])/2.0f;
        temp.push_back(avg);
    }
    
    for(auto&e:temp)
    {
        int rank=0;
        for(auto&i:temp)
        {
            if(e<i)
            {
                ++rank;
            }
        }
        answer.push_back(rank+1);
    }
    
    return answer;
}