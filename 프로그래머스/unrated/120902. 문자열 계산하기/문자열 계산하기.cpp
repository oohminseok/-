#include <string>
#include <vector>
#include <sstream>
#include <queue>
using namespace std;

int solution(string my_string) 
{
    std::stringstream ss;
    ss.str(my_string);
    std::string temp;
    std::queue<std::string> q;
    int answer = 0;
    while (ss >> temp)
    {
        q.push(temp);
    }

    while (!q.empty())
    {

        if (q.front() == "+")
        {
            q.pop();
            answer += std::stoi(q.front());
        }
        else if (q.front() == "-")
        {
            q.pop();
            answer -= std::stoi(q.front());
        }
        else
        {
            answer = std::stoi(q.front());
        }
        q.pop();
    }
    return answer;
}