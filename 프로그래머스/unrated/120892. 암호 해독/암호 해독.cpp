#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) 
{
    string answer = "";
    int temp = code;
    for(int i=0; i<cipher.size(); ++i)
    {
        if(i==code-1)
        {
            code+=temp;
            answer+=cipher[i];
        }
    }
    
    return answer;
}