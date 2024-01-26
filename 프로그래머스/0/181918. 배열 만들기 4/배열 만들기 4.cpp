#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> stk;
    int i=0;
    stk.push_back(arr[i]);
    ++i;
    
    while(i!=arr.size())
    {
        if(stk.empty())
        {
            stk.push_back(arr[i]);
            ++i;
        }
        else if(!stk.empty()&&stk.back()<arr[i])
        {
            stk.push_back(arr[i]);
            ++i;
        }
        else if(!stk.empty()&&stk.back()>=arr[i])
        {
            stk.pop_back();
        }
    }
  
    return stk;
}