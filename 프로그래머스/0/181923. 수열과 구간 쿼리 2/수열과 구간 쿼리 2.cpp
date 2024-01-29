#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    vector<int> answer;
   
    for(int i=0; i<queries.size(); ++i)
    {
        int number=1000000;
        for(int j=queries[i][0]; j<=queries[i][1]; ++j)
        {
            if(queries[i][2]<arr[j]&&number>arr[j])
            {
                number=arr[j];
            }
        }
        if (number == 1000000)
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(number);
        }
    }
    
    return answer;
}