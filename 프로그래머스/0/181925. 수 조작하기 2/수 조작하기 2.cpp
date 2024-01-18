#include <string>
#include <vector>
#include <stack>
using namespace std;

string solution(vector<int> numLog) 
{
    string answer = "";
    int number=numLog[0];
    int index=0;
    
    while(index!=numLog.size())
    {
        std::vector<std::pair<int,char>> v{{1,'w'},{-1,'s'},{10,'d'},{-10,'a'}};
        
        for(int i=0; i<v.size(); ++i)
        {
            if(number+v[i].first==numLog[index])
            {
                answer+=v[i].second;
                number+=v[i].first;
            }
        }
        ++index;
    }
    return answer;
}