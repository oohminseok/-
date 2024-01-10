#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    std::string s=std::to_string(a)+std::to_string(b);
    int answer1=std::stoi(s);
    int answer2=2*a*b;
    if(answer1>=answer2)
    {
        return answer1;
    }
    
    return answer2;
}