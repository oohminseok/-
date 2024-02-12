#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    if(arr.size()==1)
    {
        arr.pop_back();
        arr.push_back(-1);
    }
    else
    {
        bool ok = false;
        for (int i = 1; i <= 1000; ++i)
        {
            for (int j = 0; j < arr.size(); ++j)
            {
                if (i == arr[j])
                {
                    ok = true;
                    auto iter =arr.begin()+j;
                    arr.erase(iter);
                }
            }
            if (ok == true)
            {
                break;
            }
        }
    }
   
    return arr;
}