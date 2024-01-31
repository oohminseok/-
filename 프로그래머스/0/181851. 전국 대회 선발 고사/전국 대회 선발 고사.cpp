#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) 
{
    int answer = 0;
   std::vector<std::pair<int, int>> v;

    for (int i = 0; i < rank.size(); ++i)
    {
        int r = 1;
        for (int j = 0; j < rank.size(); ++j)
        {
            if (rank[i] > rank[j])
            {
                ++r;
            }
        }
        if (attendance[i] == true)
        {
            v.push_back({ rank[i],i });
        }
    }
    std::sort(v.begin(), v.end());
   
    while (v.size() > 3)
    {
        v.pop_back();
    }
   
    answer = (10000 * v[0].second) + (100 * v[1].second) + v[2].second;
    
    return answer;
}