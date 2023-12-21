#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> array) 
{
    std::queue<std::pair<int, int>> q;

    for (int i = 0; i < 1000; ++i)
    {
        int count = 0;
        for (int j = 0; j < array.size(); ++j)
        {
            if (i == array[j])
            {
                ++count;
            }
        }
        if (count > 0)
        {
            q.push({ i,count });
        }
    }
    
    if(q.size()==1)
    {
        return q.front().first;
    }
    
    int answer = q.front().second;
    int number = q.front().first;
    q.pop();

    while (!q.empty())
    {
        if (answer < q.front().second)
        {
            number = q.front().first;
            answer = q.front().second;
        }
        else if(answer>q.front().second)
        {
            q.pop();
            continue;
        }
        else if(answer==q.front().second)
        {
            number=-1;
        }
        q.pop();
    }
    

  return number;

}