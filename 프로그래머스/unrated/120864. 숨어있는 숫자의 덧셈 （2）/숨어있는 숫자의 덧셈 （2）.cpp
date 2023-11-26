#include <string>
#include <vector>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
 
    for (int i = 0; i < my_string.size(); ++i)
    {
        if (my_string[i] >= 48 && my_string[i] <= 57)
        {
            std::string temp{};
            if (i < my_string.size()&&my_string[i]<=57)
            {
                while (my_string[i] <= 57)
                {
                    temp += my_string[i];
                    ++i;
                }
                answer += std::stoi(temp);            
            }
        }
    }
    
    return answer;
}