#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) 
{
   if(common[0]<0)
   {
       if(common[1]-common[0]==common[common.size()-1]-common[common.size()-2])
       {
           return common[common.size()-1]+(common[1]-common[0]);
       }
       else
       {
           return common[common.size()-1]*(common[1]/common[0]);
       }
   }
   else
   {
       if(common[1]-common[0]==common[common.size()-1]-common[common.size()-2])
       {
           return common[common.size()-1]+(common[1]-common[0]);
       }
       else
       {
           return common[common.size()-1]*(common[1]/common[0]);
       }
   }
    
    
    
}