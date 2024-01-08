#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> num_list) 
{
    std::string s1;
    std::string s2;
    for(auto&e:num_list)
    {
        if(e==1||e%2==1)
        {
            s1+=std::to_string(e);
        }
        else if(e%2==0)
        {
            s2+=std::to_string(e);
        }
    }
    int answer = std::stoi(s1)+std::stoi(s2);
    return answer;
}