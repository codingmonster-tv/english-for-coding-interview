#include<vector>
using namespace std;

class Solution {
public:
    // i will define 4 directions that we will move in order of right, down, left and up 
    // define two arrays, dr and dc, as the arrays, the index of them corresponds to the direction, zero is right, one is down, two is left, three is up .
    int dr[4] = { 0, +1, 0, -1 }; // the dr means delta row for each move 
    int dc[4] = { +1, 0, -1, 0 }; // the dc means delta colum for eact move 
    
    // I will define a constant -1e9 that indicates that 'this greed is already visited', because the range of greed value is between -100 and 100 
    const int USED = -1e9;
    vector<int> spiralOrder(vector<vector<int> >& matrix) {
        // I will save the number of rows and colums into two variables rows, cols  
        int rows = matrix.size(); // first, let rows is the number of entire rows and get it from the size of first dimension 
        if(rows == 0) return {};  // and check the exceptional case that vector is empty 
        int cols = matrix[0].size(); // second, let cols is the number of entire cols and get it from first vector's size 
        if(cols == 0) return {};  // and also check the case that the number of column is zero 
        
        int n = rows * cols;  // i will define the n as the number of entire elements in matrix 
        int r = 0, c = 0; // and let me define two coordinate variable, r and c, to interate all greeds. it has the initial position first 
        int dir = 0;      // and the variable DIR that indicates current direction of progress 
        
        vector<int> path;  // vector path is to save the answer and to be returned as given return type 
        
        
        for(int i = 0 ; i < n ; i += 1){    // i have the I loop staring from zero and to n minus one 
            // in the loop, i will let the R and C indicates current coordinate 
            path.push_back(matrix[r][c]);   // so they would be stacked into the vector path, so I can get the list of greeds in visited order 
            matrix[r][c] = USED;    // let's mark a matrix at r comma c as USED 
            
            // by using delta row and colum and direction variable 
            int nr = r + dr[dir]; // let's defien  variable NR as expected next row 
            int nc = c + dc[dir]; // and NC as expected next column 
            
            // then, if nr and nc is out of matrix or that greeed is already visited in the past, 
            // it's time to turn the direction 
            if( nr < 0 || nr >= rows || nc < 0 || nc >= cols || matrix[nr][nc] == USED){
                dir = (dir+1)%4;    // change dir to the remainder of dir plus 1 divided by 4, so it will rotate  
                nr = r + dr[dir];   // and let's calculate next coordinate again with new direction 
                nc = c + dc[dir];
            }
            // overwrite r and c with nr and nc 
            r = nr, c = nc;
        } // so this loop I will iterate all the greeds inside matrix 
        
        return path; // then the vector 'path' meets all the requirements of this function
    }
};