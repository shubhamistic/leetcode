class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int parameter = 0;
        for(int i=0 ; i < grid.size() ; i++){
            for(int j=0 ; j < grid[i].size() ; j++){
                if(grid[i][j] == 1){
                    int surroundedRegion = 0;
                    if((i > 0) && (i < grid.size() -1)){
                        if((j > 0) && (j < grid[i].size() -1)){
                            if(grid[i-1][j] == 1) {surroundedRegion++;}
                            if(grid[i][j+1] == 1) {surroundedRegion++;}
                            if(grid[i+1][j] == 1) {surroundedRegion++;}
                            if(grid[i][j-1] == 1) {surroundedRegion++;}
                        }
                        else{
                            if(j == 0){
                                if(grid[i].size() > 1){
                                    if(grid[i-1][j] == 1) {surroundedRegion++;}
                                    if(grid[i][j+1] == 1) {surroundedRegion++;}
                                    if(grid[i+1][j] == 1) {surroundedRegion++;}
                                }
                                else{
                                    if(grid[i-1][j] == 1) {surroundedRegion++;}
                                    if(grid[i+1][j] == 1) {surroundedRegion++;}
                                }
                            }
                            else{
                                if(grid[i].size() > 1){
                                    if(grid[i-1][j] == 1) {surroundedRegion++;}
                                    if(grid[i][j-1] == 1) {surroundedRegion++;}
                                    if(grid[i+1][j] == 1) {surroundedRegion++;}
                                }
                                else{
                                    if(grid[i-1][j] == 1) {surroundedRegion++;}
                                    if(grid[i+1][j] == 1) {surroundedRegion++;}
                                }
                            }
                        }
                    }
                    else{
                        if(i == 0){
                            if(grid.size() > 1){
                                if((j > 0) && (j < grid[i].size() -1)){
                                    if(grid[i][j+1] == 1) {surroundedRegion++;}
                                    if(grid[i+1][j] == 1) {surroundedRegion++;}
                                    if(grid[i][j-1] == 1) {surroundedRegion++;}
                                }
                                else{
                                    if(j == 0){
                                        if(grid[i].size() > 1){
                                            if(grid[i][j+1] == 1) {surroundedRegion++;}
                                            if(grid[i+1][j] == 1) {surroundedRegion++;}
                                        }
                                        else{
                                            if(grid[i+1][j] == 1) {surroundedRegion++;}
                                        }
                                    }
                                    else{
                                        if(grid[i].size() > 1){
                                            if(grid[i][j-1] == 1) {surroundedRegion++;}
                                            if(grid[i+1][j] == 1) {surroundedRegion++;}
                                        }
                                        else{
                                            if(grid[i+1][j] == 1) {surroundedRegion++;}
                                        }
                                    }
                                }
                            }
                            else{
                                if((j > 0) && (j < grid[i].size() -1)){
                                    if(grid[i][j+1] == 1) {surroundedRegion++;}
                                    if(grid[i][j-1] == 1) {surroundedRegion++;}
                                }
                                else{
                                    if(j == 0){
                                        if(grid[i].size() > 1){
                                            if(grid[i][j+1] == 1) {surroundedRegion++;}
                                        }
                                    }
                                    else{
                                        if(grid[i].size() > 1){
                                            if(grid[i][j-1] == 1) {surroundedRegion++;}
                                        }
                                    }
                                }
                            }
                        }
                        else{
                            if(grid.size() > 1){
                                if((j > 0) && (j < grid[i].size() -1)){
                                    if(grid[i][j+1] == 1) {surroundedRegion++;}
                                    if(grid[i-1][j] == 1) {surroundedRegion++;}
                                    if(grid[i][j-1] == 1) {surroundedRegion++;}
                                }
                                else{
                                    if(j == 0){
                                        if(grid[i].size() > 1){
                                            if(grid[i][j+1] == 1) {surroundedRegion++;}
                                            if(grid[i-1][j] == 1) {surroundedRegion++;}
                                        }
                                        else{
                                            if(grid[i-1][j] == 1) {surroundedRegion++;}
                                        }
                                    }
                                    else{
                                        if(grid[i].size() > 1){
                                            if(grid[i][j-1] == 1) {surroundedRegion++;}
                                            if(grid[i-1][j] == 1) {surroundedRegion++;}
                                        }
                                        else{
                                            if(grid[i-1][j] == 1) {surroundedRegion++;}
                                        }
                                    }
                                }
                            }
                            else{
                                if((j > 0) && (j < grid[i].size() -1)){
                                    if(grid[i][j+1] == 1) {surroundedRegion++;}
                                    if(grid[i][j-1] == 1) {surroundedRegion++;}
                                }
                                else{
                                    if(j == 0){
                                        if(grid[i].size() > 1){
                                            if(grid[i][j+1] == 1) {surroundedRegion++;}
                                        }
                                    }
                                    else{
                                        if(grid[i].size() > 1){
                                            if(grid[i][j-1] == 1) {surroundedRegion++;}
                                        }
                                    }
                                }
                            }
                        }
                    }
                    parameter += (4 - surroundedRegion);
                }
            }
        }
        return parameter;
    }
};