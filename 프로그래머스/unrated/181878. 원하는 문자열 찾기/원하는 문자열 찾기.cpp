#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string myString, string pat) 
{
    
    std::transform(myString.begin(), myString.end(), myString.begin(), ::toupper);
    std::transform(pat.begin(), pat.end(), pat.begin(), ::toupper);
    int answer = myString.find(pat);
    if(answer<0)
    {
        return 0;
    }
    
    return 1;
}