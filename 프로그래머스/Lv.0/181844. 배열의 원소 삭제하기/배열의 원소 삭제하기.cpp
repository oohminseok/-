#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) 
{
  
    while (!delete_list.empty())
    {
        for (int i = 0; i < arr.size(); ++i)
        {
            if (delete_list.back() == arr[i])
            {
                auto iter = std::find(arr.begin(), arr.end(), arr[i]);
                arr.erase(iter);
            }
        }
        delete_list.pop_back();
    }
    
    return arr;
}