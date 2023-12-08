#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> dots) 
{
    std::vector<int> x;
    std::vector<int> y;
    for(int i=0; i<dots.size(); ++i)
    {
        x.push_back(dots[i][0]);
        y.push_back(dots[i][1]);
    }
    std::sort(x.begin(),x.end());
    std::sort(y.begin(),y.end());
    
    int answer = (x[2]-x[0])*(y[2]-y[0]);
    return answer;
}