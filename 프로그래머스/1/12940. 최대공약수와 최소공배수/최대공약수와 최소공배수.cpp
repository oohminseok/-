#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) 
{
    vector<int> answer;
    
    int commonmultiple=0;
    int commondivisor=0;
    for(int i=1; i<=m; ++i)
    {
        if(n%i==0&&m%i==0)
        {
            commondivisor=i;
        }
    }
    answer.push_back(commondivisor);
    
    for(int i=1; i<=10000000; ++i)
    {
        if(i%n==0&&i%m==0)
        {
            commonmultiple=i;
            break;
        }
    }
    answer.push_back(commonmultiple);
    
    return answer;
}