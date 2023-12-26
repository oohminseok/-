#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) 
{
    std::vector<std::string> answer;

    for (int i = 0; i < quiz.size(); ++i)
    {
        std::stringstream s;
        s.str(quiz[i]);
        int number = 0;

        std::vector<int> v;
        std::string t;
        bool check = true;
        while (s >> t)
        {
       
            if (t == "-")
            {
                check = false;
                continue;
            }
            else if (t == "+")
            {
                continue;
            }
            else if (t == "=")
            {
                v.push_back(number);
                number = 0;
                check = true;
                continue;
            }
            else
            {
                if (check)
                {
                    number += std::stoi(t);
                }
                else
                {
                    number += -std::stoi(t);
                }     
            }
        }


        if (number == v[0])
        {
            answer.push_back("O");
        }
        else
        {
            answer.push_back("X");
        }
    }
    
    return answer;
}