#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) 
{
    int pos=my_string.find(target);
    if(pos<0)
    {
        return 0;
    }
    return 1;
}