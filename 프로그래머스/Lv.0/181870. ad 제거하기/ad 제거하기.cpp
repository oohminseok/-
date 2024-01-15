#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) 
{
    vector<string> answer;
    
    for(int i=0; i<strArr.size(); ++i)
    {
        int pos=strArr[i].find("ad");
        if(pos<0)
        {
            answer.push_back(strArr[i]);
        }
    }
    return answer;
}