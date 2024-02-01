#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) 
{
    for (int i = 0; i < query.size(); ++i)
    {
        if (i % 2 == 0 && query[i]<arr.size())
        {
            int number = query[i] + 1;
            while (number < arr.size())
            {
                auto iter = arr.begin() + number;
                arr.erase(iter);
            }
        }
        else
        {
            int number = query[i] - 1;
            while (number >=0)
            {
                auto iter = arr.begin() + number;
                arr.erase(iter);
                --number;
            }
            
        }
    }
    
    return arr;
}