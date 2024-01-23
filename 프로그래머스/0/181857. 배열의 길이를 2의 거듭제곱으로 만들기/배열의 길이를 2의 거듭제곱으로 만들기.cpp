#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    if(arr.size()==1)
    {
        return arr;
    }
    int n=2;
    
    while(n!=arr.size())
    {
        if(n<arr.size())
        {
            n*=2;
        }
        else if(n>arr.size())
        {
            arr.push_back(0);
        }
    }
    
    return arr;
}