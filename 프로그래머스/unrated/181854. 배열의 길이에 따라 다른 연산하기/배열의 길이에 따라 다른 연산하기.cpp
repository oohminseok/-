#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) 
{
    int index=0;
    vector<int> answer;
    
    if(arr.size()%2==1)
    {
        for(int i=0; i<arr.size(); ++i)
        {
            if(i%2==0)
            {
                answer.push_back(arr[i]+n);
            }
            else
            {
                answer.push_back(arr[i]);
            }
        }
    }
    else
    {
        for(int i=0; i<arr.size(); ++i)
        {
            if(i%2==0)
            {
                answer.push_back(arr[i]);
            }
            else
            {
                answer.push_back(arr[i]+n);
            }
        }
    }

    return answer;
}