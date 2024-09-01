#include <iostream>
#include <vector>

using namespace std;

const int MAX_SIZE = 100;

int N, M, S, E, P;
int startX, startY, endX, endY;


int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int found =0 ;
void printGraph(vector<vector<int>> maze)
{
    for(int i=0 ; i<N;i++)
    {
        for(int y =0 ;y<M;y++)
        {
            cout << maze[i][y] << " ";
        }
        cout << endl;
    }
}
void printGraph2(vector<vector<bool>> visited)
{
    for(int i=0 ; i<N;i++)
    {
        for(int y =0 ;y<M;y++)
        {
            char x = visited[i][y] ==true ? '1' : '0';

            cout << x <<" ";
        }
        cout << endl;
    }
}
bool isValid(int x, int y , vector<vector<int> > maze , vector<vector<bool> > visited) 
{
    return (x >= 0 && x < N && y >= 0 && y < M) && (maze[x][y] == P || maze[x][y] == E || maze[x][y] == S) && !visited[x][y];
}

void recur(vector<vector<int> > maze, vector<vector<bool> > visited, int x, int y, int endX, int endY) 
{
    // printGraph(maze);
    //     printGraph2(visited);
    if(isValid(x, y, maze, visited))
    {
        
        if(x == endX and y == endY)
        {
            found =1;
            return;
        }
        visited[x][y] = true;
        for (int i = 0; i < 4; i++) 
        {
            recur(maze, visited, x + dx[i], y + dy[i], endX, endY);
        }
    }


}

int main() {
    cin >> N >> M;
    cin >> S >> E;
    cin >> P;

    vector<vector<int> > maze(MAX_SIZE, vector<int>(MAX_SIZE, 0));
    vector<vector<bool> > visited(MAX_SIZE, vector<bool>(MAX_SIZE, false));

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            cin >> maze[i][j];
            if (maze[i][j] == S) 
            {
                startX = i;
                startY = j;
            } 
            else if (maze[i][j] == E) 
            {
                endX = i;
                endY = j;
            }
        }
    }
    
    recur(maze, visited, startX, startY, endX, endY);

    if (found) {
        cout << "Yeah, There's The Way Out!";
    } else {
        cout << "Oh No! We're Trapped.";
    }
    return 0;
}