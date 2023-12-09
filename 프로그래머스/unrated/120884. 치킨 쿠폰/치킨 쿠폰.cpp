#include <string>
#include <vector>

using namespace std;

int solution(int chicken) 
{
    int coupon=0;
    int answer =0;
    while(chicken!=0)
    {
        ++coupon;
        --chicken;
        if(coupon==10)
        {
            coupon=0;
            ++answer;
            ++chicken;
        }
    }
    return answer;
}