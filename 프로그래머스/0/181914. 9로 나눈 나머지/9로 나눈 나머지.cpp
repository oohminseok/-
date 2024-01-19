#include <string>
#include <vector>

using namespace std;

int solution(string number) 
{
    int answer = 0;
    
    for(int i=0; i<number.size(); ++i)
    {
        std::string temp;
        temp+=number[i];
        answer+=std::stoi(temp);
        temp.clear();
    }
    
    return answer%9;
}