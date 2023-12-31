#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int num, int total) 
{
    vector<int> answer;
    int n = total;

    while (true)
    {
       int number = 0;

       for (int i = 0; i < num; ++i)
       {
           number += n + i;
       }

       if (number == total)
       {
           for (int i = 0; i < num; ++i)
           {
               answer.push_back(n + i);
           }
           break;
       }
       --n;
    }

    return answer;
}