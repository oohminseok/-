#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> arr) 
{
    int count=0;
    bool ok=true;
    std::vector<int> v;
    
    while (ok)
    {
        ++count;
        for (int i = 0; i < arr.size(); ++i)
        {
            if (arr[i] >= 50 && arr[i] % 2 == 0)
            {
                v.push_back(arr[i]);
                arr[i] = arr[i] / 2;
            }
            else if (arr[i] < 50 && arr[i] % 2 == 1)
            {
                v.push_back(arr[i]);
                arr[i] = (arr[i] * 2) + 1;
            }
            else
            {
                v.push_back(arr[i]);
            }
        }

        for (int i = 0; i < arr.size(); ++i)
        {
            if (v[i] == arr[i])
            {
                ok = false;
            }
            else
            {
                ok = true;
                break;
            }
        }

        v.clear();
    }
    
    return count-1;
}