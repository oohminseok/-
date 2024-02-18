#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) 
{
    int answer = 0;
    std::sort(d.begin(),d.end());
    int n=0;
    
    for(int i=0; i<d.size(); ++i)
    {
        n+=d[i];
        if(n<=budget)
        {
            ++answer;
        }
        else
        {
            break;
        }
    }
    return answer;
}