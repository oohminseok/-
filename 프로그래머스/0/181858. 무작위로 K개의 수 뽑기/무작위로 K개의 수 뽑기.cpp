#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int k) 
{
    vector<int> answer;
    answer.push_back(arr[0]);

    for (int i = 1; i < arr.size(); ++i)
    {
        bool ok = false;

        for (int j = 0; j < answer.size(); ++j)
        {
            if (arr[i] == answer[j])
            {
                ok = true;
            }
        }
        if (!ok&&answer.size()<k)
        {
            answer.push_back(arr[i]);
        }
    }

    if (answer.size() != k)
    {
        int n = k - answer.size();
        for (int i = 0; i < n; ++i)
        {
            answer.push_back(-1);
        }
    }
    
    return answer;
}