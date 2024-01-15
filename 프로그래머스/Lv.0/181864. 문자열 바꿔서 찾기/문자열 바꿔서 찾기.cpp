#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) 
{
    int answer = 0;
    
    for(int i=0; i<myString.size(); ++i)
    {
        if(myString[i]=='A')
        {
            myString[i]='B';
        }
        else if(myString[i]=='B')
        {
            myString[i]='A';
        }
    }
    
    int pos=0;
    pos=myString.find(pat);
    if(pos<0)
    {
        return 0;
    }
    return 1;
}