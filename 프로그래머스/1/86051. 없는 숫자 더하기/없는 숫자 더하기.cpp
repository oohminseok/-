#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    
    for(int i=1; i<=9; ++i)
    {
        bool ok=false;
        for(int j=0; j<numbers.size(); ++j)
        {
            if(i==numbers[j])
            {
                ok=true;
            }
        }
        
        if(!ok)
        {
            answer+=i;
        }
    }
    
    return answer;
}