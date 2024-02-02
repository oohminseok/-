#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) 
{
    std::vector<std::vector<int>> v(n, std::vector<int>(n, 0));
    std::vector<int> x{ 1,0,-1,0 };
    std::vector<int> y{ 0,1,0,-1 };
    std::pair<int, int> m{ 0,0 };
    v[0][0] = 1;
    int k = 0;

    for (int i = 2; i <=n*n; ++i)
    {
        int fy = m.first + y[k];
        int fx = m.second + x[k];
        
        if (fx < 0 || fx >= n || fy < 0 || fy >= n || v[fy][fx] > 0)
        {
            if (k == 0)
            {
                k = 1;
            }
            else if (k == 1)
            {
                k = 2;
            }
            else if (k == 2)
            {
                k = 3;
            }
            else if (k == 3)
            {
                k = 0;
            }
           fy = m.first + y[k];
           fx = m.second + x[k];
        }
        
        v[fy][fx] = i;
        m.first = fy;
        m.second = fx;
    }
    return v;
}