#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) 
{
    int pos=str2.find(str1);
    if(pos<0)
    {
        return 0;
    }

    return 1;
}