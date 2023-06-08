#include<vector>
#include<iosfwd>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res (n, vector<int>(n, 0));
        int start_i, start_j = 0;
        int offset = 1;
        int i, j;
        int loop = n / 2;
        int count = 1;
        while(loop--){
            for(j = start_j; j < n - offset; j++){
                res[start_i][j] = count ++;
            }
            for(i = start_i; i < n - offset; i++){
                res[i][j] = count ++;
            }
            for(;j > start_j; j--){
                res[i][j] = count++;
            }
            for(;i> start_i;i--){
                res[i][j] = count++;
            }
            start_i++;
            start_j++;
            offset++;
        }
        if(n % 2 != 0){//if n is odd number
            res[n/2][n/2] = count;
        }
        return res;
    }
};