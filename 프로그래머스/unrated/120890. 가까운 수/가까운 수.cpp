#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) 
{
    int answer =1000;
    int index=0;
    std::vector<std::pair<int,int>> temp;

	for (int i = 0; i < array.size(); ++i)
	{
		int number = n - array[i];
		if (number < 0)
		{
			temp.push_back({ array[i],-number });
		}
		else
		{
			temp.push_back({ array[i],number });
		}
	}

	for (int i = 0; i < temp.size(); ++i)
	{
		if (answer > temp[i].second)
		{
			answer = temp[i].second;
			index = i;
		}
		else if (answer == temp[i].second)
		{
			if (temp[i - 1].first > temp[i].first)
			{
				answer = temp[i].second;
				index = i;
			}
		}
	}

    
    
    return temp[index].first;
}