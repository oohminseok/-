#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) 
{
    string answer = "";
    for(int i=0; i<str_list.size(); ++i)
    {
        int pos=str_list[i].find(ex);
        if(pos<0)
        {
            answer+=str_list[i];
        }
    }
    
    return answer;
}