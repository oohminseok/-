#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    
    
    for(int i=0; i<arr.size(); ++i)
    {
       for(int j=0; j<queries.size(); ++j)
       {
           if(i>=queries[j][0]&&i<=queries[j][1])
           {
               arr[i]+=1;
           }
       }
    }
    
    
    return arr;
}