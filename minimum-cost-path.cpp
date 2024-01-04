//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
      bool isValid(int x, int y, int n) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

// Structure to represent a cell in the grid
struct Cell {
    int x, y, cost;

    Cell(int _x, int _y, int _cost) : x(_x), y(_y), cost(_cost) {}

    // Overloading the comparison operator for priority queue
    bool operator>(const Cell& other) const {
        return cost > other.cost;
    }
};
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
      int n = grid.size();

    // Vector to store minimum costs for each cell
    vector<vector<int>> minCost(n, vector<int>(n, INT_MAX));

    // Priority queue to get the cell with the minimum cost
    priority_queue<Cell, vector<Cell>, greater<Cell>> pq;

    // Initialize the starting cell
    pq.push(Cell(0, 0, grid[0][0]));
    minCost[0][0] = grid[0][0];

    // Possible directions to move
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    while (!pq.empty()) {
        Cell current = pq.top();
        pq.pop();

        for (int i = 0; i < 4; ++i) {
            int nextX = current.x + dx[i];
            int nextY = current.y + dy[i];

            if (isValid(nextX, nextY, n)) {
                int newCost = current.cost + grid[nextX][nextY];

                if (newCost < minCost[nextX][nextY]) {
                    minCost[nextX][nextY] = newCost;
                    pq.push(Cell(nextX, nextY, newCost));
                }
            }
        }
    }

    // The minimum cost to reach the bottom-right cell
    return minCost[n - 1][n - 1];
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
