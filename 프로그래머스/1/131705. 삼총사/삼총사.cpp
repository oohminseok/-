#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) 
{
    int count = 0;
    for (int i = 0; i < number.size(); ++i)
    {
        int temp = 0;
        for (int k = i + 1; k < number.size(); ++k)
        {
            for (int j = k + 1; j < number.size(); ++j)
            {
                temp = number[i] + number[k] + number[j];
                if (temp == 0)
                {
                    ++count;
                }
            }
        }
    }
    return count;
}