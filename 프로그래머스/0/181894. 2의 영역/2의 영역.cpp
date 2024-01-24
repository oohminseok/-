#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int first=0;
    int last=0;
    bool ok=false;
    
   for(int i=0; i<arr.size(); ++i)
   {
       if(arr[i]==2&&!ok)
       {
           first=i;
           last=i;
           ok=true;
       }
       else if(arr[i]==2&&ok)
       {
           last=i;
       }
   }
    
    if(first==0&&last==0)
    {
        answer.push_back(-1);
    }
    else
    {
        for(int i=first; i<=last; ++i)
        {
            answer.push_back(arr[i]);
        }
    }
    
    return answer;
}