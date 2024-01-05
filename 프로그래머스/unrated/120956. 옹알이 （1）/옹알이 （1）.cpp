#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) 
{
    for (int j = 0; j < babbling.size(); ++j)
    {
       int p1 = babbling[j].find("aya");
        if (p1 >= 0)
        {
            babbling[j].replace(p1, 3, "111");
        }

        int p2 = babbling[j].find("ye");
        if (p2 >= 0)
        {
            babbling[j].replace(p2, 2, "11");
        }

        int p3 = babbling[j].find("woo");
        if (p3 >= 0)
        {
            babbling[j].replace(p3, 3, "111");
        }

        int p4 = babbling[j].find("ma");
        if (p4 >= 0)
        {
            babbling[j].replace(p4, 2, "11");
        }
    }
    
    int answer = 0;
    for (int i = 0; i < babbling.size(); ++i)
    { 
        bool ok=true;
        for(auto& e:babbling[i])
        {
            if(e!='1')
            {
                ok=false;
            }
        }
        if(ok)
        {
            ++answer;
        }
    }
    return answer;
}