#include <string>
#include <vector>

using namespace std;

string solution(string code) 
{
    string answer = "";
    
    int mode=0;
    for(int i=0; i<code.size(); ++i)
    {
       if(mode==0)
       {
           if(code[i]!='1'&&i%2==0)
           {
               answer+=code[i];
           }
           else if(code[i]=='1')
           {
               mode=1;
           }
       }
       else if(mode==1)
       {
           if(code[i]!='1'&&i%2!=0)
           {
               answer+=code[i];
           }
           else if(code[i]=='1')
           {
               mode=0;
           }
       }
    }
    
    if(answer.size()==0)
    {
        answer="EMPTY";
    }
    return answer;
}