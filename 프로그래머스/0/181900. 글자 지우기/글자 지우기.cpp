#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) 
{
    string answer = "";
    
    for(int i=0; i<my_string.size(); ++i)
    {
         bool ok=false;
        for(int j=0; j<indices.size(); ++j)
        {
            if(i==indices[j])
            {
                ok=true;
            }
        }
        if(!ok)
        {
            answer+=my_string[i];
        }
    }
    return answer;
}