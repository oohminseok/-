#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    
    for (int i = 2; i <= n; ++i)
    {
        if (n % i == 0)
		{

			if (i == 2 || i == 3)
			{
				answer.push_back(i);
			}
			else
			{
				bool check = true;
				for (int j = 2; j < i; ++j)
				{
					if (i % j == 0)
					{
						check = false;
						break;
					}
				}
				if (check)
				{
					answer.push_back(i);
				}
			}
        }
    }

    
    return answer; 
}