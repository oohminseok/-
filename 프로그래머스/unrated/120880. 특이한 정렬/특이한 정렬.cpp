#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numlist, int n) 
{
    std::vector<int> answer;
    std::vector<pair<int, int>> v;

    sort(numlist.begin(), numlist.end(), greater<>());

    for (int i = 0; i < numlist.size(); i++)
    {
        v.push_back({ abs(numlist[i] - n), numlist[i] });
    }
    
std::sort(v.begin(), v.end(), [](std::pair<int, int>a, std::pair<int, int>b) 
        {
            if (a.first == b.first) return a.second > b.second;
            return a.first < b.first;
        });

    for (int i = 0; i < v.size(); i++)
    {
        answer.push_back(v[i].second);
    }
    
    return answer;
}