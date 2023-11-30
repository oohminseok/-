#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> numbers, int k) 
{
    std::queue<int> temp;
    for (int i = 0; i < numbers.size(); ++i)
	{
		temp.push(numbers[i]);
	}
	int answer = 0;
	while (k != 0)
	{
		--k;
		answer = temp.front();
		for (int i = 1; i <= 2; ++i)
		{
			temp.push(temp.front());
			temp.pop();
		}

	}
    
    return answer;

}