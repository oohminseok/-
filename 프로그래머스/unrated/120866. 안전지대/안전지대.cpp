#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<vector<int>> board) 
{
    vector<vector<int>> xy{ {1,1},{1,0},{1,-1},{0,-1},{0,0},{0,1},{-1,1},{-1,0},{-1,-1} };

    int answer = 0;
    for (int i = 0; i <board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            int check = 1;
            for (const auto& k : xy) 
            {
                int fy = i + k[0];
                int fx = j + k[1];
                if (fy >= 0 && fy < board.size() && fx >= 0 && fx < board.size() && board[fy][fx] == 1)
                {
                    check = 0;
                    break;
                }
            }
            answer += check;
        }
    }

    return answer;
}