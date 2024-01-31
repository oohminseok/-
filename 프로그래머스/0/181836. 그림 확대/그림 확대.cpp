#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) 
{
    vector<string> answer;
    
    for(int i=0; i<picture.size(); ++i)
    {
        std::string temp;
        for (int j = 0; j < picture[i].size(); ++j)
        {
            int number = k;
            while (number != 0)
            {
                temp += picture[i][j];
                --number;
            }
        }
        for(int i=0; i<k; ++i)
        {
             answer.push_back(temp);
        }
    }
    return answer;
}