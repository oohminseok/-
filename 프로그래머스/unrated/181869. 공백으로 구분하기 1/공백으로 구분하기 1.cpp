#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(string my_string) 
{
    std::stringstream ss;
    ss.str(my_string);
    vector<string> answer;
    std::string temp;
    while (ss>>temp)
    {
        answer.push_back(temp);
    }
    return answer;
}