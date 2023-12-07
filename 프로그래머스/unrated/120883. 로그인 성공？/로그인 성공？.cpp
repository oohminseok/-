#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) 
{
    bool idlogin=false;
    bool pwlogin=false;
    
    for(int j=0; j<db.size(); ++j)
    {
        if(id_pw[0]==db[j][0])
        {
            idlogin=true;
            if(id_pw[1]==db[j][1])
            {
                pwlogin=true;
                return "login";
            }
            else
            {
                continue;
            }
        }
    }
    
    if(idlogin&&!pwlogin)
    {
        return "wrong pw";
    }
    else
    {
        return "fail";
    }
 
}