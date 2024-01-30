#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
    int j = 0;
    for (int i=s;i<=overwrite_string.size()+s-1; ++i)
    {
         my_string[i] = overwrite_string[j];
        ++j;
    }

    return my_string;
}