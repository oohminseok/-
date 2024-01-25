#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> arr) 
{
    int count=0;
    bool ok=true;
    std::queue<int> q;
    
    while(ok)
    {
        ++count;
        for(int i=0; i<arr.size(); ++i)
        {
            if(arr[i]>=50&&arr[i]%2==0)
            {
                q.push(arr[i]);
                arr[i]=arr[i]/2;
            }
            else if(arr[i]<50&&arr[i]%2==1)
            {
                q.push(arr[i]);
                arr[i]=(arr[i]*2)+1;
            }
            else
            {
                 q.push(arr[i]);
            }
        }
        
          for (int i = 0; i < arr.size(); ++i)
        {
            if (q.front() == arr[i])
            {
                ok = false;
            }
            else
            {
                ok = true;
                break;
            }
            q.pop();
        }

        while (!q.empty())
        {
            q.pop();
        }
    }
    
    return count-1;
}