#include <string>
#include <vector>

using namespace std;

int solution(string num_str) 
{
    int answer = 0;
    std::string number;
    for(auto&e: num_str)
    {
        number=e;
        answer+=std::stoi(number);
    }
    return answer;
}