#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) 
{
    std::sort(s.begin(),s.end(),std::greater<>());
    
    return s;
}