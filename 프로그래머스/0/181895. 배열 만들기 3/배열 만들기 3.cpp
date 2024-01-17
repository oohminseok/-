#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals)
{
    vector<int> answer;
    
    for(const auto& interval : intervals)
    {
        answer.insert(answer.end(),arr.begin()+interval[0],arr.begin()+interval[1] + 1);
    }
    
    return answer;
}