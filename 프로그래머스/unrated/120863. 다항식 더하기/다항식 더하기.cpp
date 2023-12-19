#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string polynomial) 
{
    std::vector<std::string> v{ "x"," + ", };
    std::string answer;
    std::stringstream ss;
    ss.str(polynomial);
    std::string s;
    int number1{};
    int number2{};
    while (ss >> s)
    {
        std::string temp{};
        if (s.size() == 1)
        {
            if (s[0] == 'x')
            {
                number1 += 1;
            }
            else if(s[0]>='1' && s[0] <= '9')
            {
                temp += s[0];
                number2 += std::stoi(temp);
            }
            else
            {
                continue;
            }

        }
        else if(s.size()>1)
        {
            if (s[s.size() - 1] == 'x')
            {
                for (int i = 0; i < s.size(); ++i)
                {
                    if (s[i] == 'x')
                    {
                        break;
                    }
                    temp += s[i];
                }
                number1 += std::stoi(temp);
            }
            else
            {
                for (int i = 0; i < s.size(); ++i)
                {
                    temp += s[i];
                }
                number2 += std::stoi(temp);
            }
        }

    }
    if (number1 != 0 && number2 != 0)
    {
         if (number1 == 1)
        {
            for (int i = 0; i < v.size(); ++i)
            {
                answer += v[i];
            }
            answer += std::to_string(number2);
        }
        else
        {
            answer += std::to_string(number1);
            for (int i = 0; i < v.size(); ++i)
            {
                answer += v[i];
            }
            answer += std::to_string(number2);
        }
    }
    else if (number1 != 0 && number2==0)
    {
        if(number1==1)
        {
            return "x";
        }
        answer += std::to_string(number1);
        answer += v[0];
    }
    else
    {
        answer += std::to_string(number2);
    }
    
    return answer;
}