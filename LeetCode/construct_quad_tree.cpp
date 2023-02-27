/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    bool same(vector<vector<int>>& grid, int x, int y, int len) {
        for(int i = x; i < x + len; i++) {
            for(int j = y; j < y + len; j++) {
                if(grid[i][j] != grid[x][y])
                    return false;
            }
        }

        return true;
    }

    Node* solve(vector<vector<int>>& grid, int i, int j, int len) {
        if(same(grid, i, j, len)) 
            return new Node(grid[i][j], true);
        
        Node* node = new Node();

        int nextLen = len / 2;
        node->topLeft = solve(grid, i, j, nextLen);
        node->topRight = solve(grid, i, j + nextLen, nextLen);
        node->bottomLeft = solve(grid, i + nextLen, j, nextLen);
        node->bottomRight = solve(grid, i + nextLen, j + nextLen, nextLen);

        return node;
    }

    Node* construct(vector<vector<int>>& grid) {
        return solve(grid, 0, 0, grid.size());
    }
};
