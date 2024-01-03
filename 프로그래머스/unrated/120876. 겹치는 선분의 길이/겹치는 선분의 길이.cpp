#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) 
{
    std::vector<std::vector<std::pair<int, int>>> v(3,std::vector<std::pair<int,int>>());
    for (int i = 0; i < v.size(); ++i)
    {

        for (int j = -100; j <= 100; ++j)
        {
            v[i].push_back({ j,0 });
        }
        if (i == 0)
        {
            for (int j = 0; j <= 200; ++j)
            {
                for (int k = lines[0][0]; k < lines[0][1]; ++k)
                {
                    if (v[i][j].first == k)
                    {
                        v[i][j].second = 1;
                    }
                }
            }
        }
        else if (i == 1)
        {
            for (int j = 0; j <= 200; ++j)
            {
                for (int k = lines[1][0]; k < lines[1][1]; ++k)
                {
                    if (v[i][j].first == k)
                    {
                        v[i][j].second = 1;
                    }
                }
            }
        }
        else if (i == 2)
        {
            for (int j = 0; j <= 200; ++j)
            {
                for (int k = lines[2][0]; k < lines[2][1]; ++k)
                {
                    if (v[i][j].first == k)
                    {
                        v[i][j].second = 1;
                    }
                }
            }
        }
    }

    int answer = 0;
    for (int i = 0; i <=200; ++i)
    {
        if (v[0][i].second ==1&& v[1][i].second==1||v[0][i].second==1&&v[2][i].second==1||v[1][i].second==1&&v[2][i].second==1)
        {
            ++answer;
        }
    }
    
    return answer;
}