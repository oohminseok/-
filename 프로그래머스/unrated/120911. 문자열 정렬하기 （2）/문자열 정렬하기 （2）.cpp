#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) 
{
    
    for(int i=0; i<my_string.size(); ++i)
    {
        if(std::isupper(my_string[i]))
        {
            my_string[i]=my_string[i]+32;
        }
    }
    std::sort(my_string.begin(),my_string.end());
    
    
    return my_string;
}