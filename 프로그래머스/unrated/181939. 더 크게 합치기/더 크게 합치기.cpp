#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    std::string s1=std::to_string(a)+std::to_string(b);
    std::string s2=std::to_string(b)+std::to_string(a);
    int n1=std::stoi(s1);
    int n2=std::stoi(s2);
    if(n1>n2)
    {
        return n1;
    }
    
    return n2;
}