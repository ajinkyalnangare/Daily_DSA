//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    queue<pair<int, int>> q;
    q.push({0, 0});
    vector<vector<int>> dist(N, vector<int>(M, INT_MAX));
    dist[0][0] = 0;

    while (!q.empty())
    {
      int x = q.front().first;
      int y = q.front().second;
      q.pop();

      for (int i = 0; i < 4; i++)
      {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < N && ny >= 0 && ny < M && A[nx][ny] == 1 && dist[nx][ny] > dist[x][y] + 1)
        {
          dist[nx][ny] = dist[x][y] + 1;
          q.push({nx, ny});
        }
      }
    }

    return dist[X][Y] == INT_MAX ? -1 : dist[X][Y];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends
