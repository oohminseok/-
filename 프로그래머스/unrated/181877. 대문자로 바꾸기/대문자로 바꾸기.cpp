#include <string>
#include <vector>

using namespace std;

string solution(string myString) 
{
    string answer = "";
    for(auto&e:myString)
    {
        answer+=std::toupper(e);
    }
    return answer;
}