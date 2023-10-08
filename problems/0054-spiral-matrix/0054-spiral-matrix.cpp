class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int>ans;
        
            int m = matrix.size();
            int n= matrix[0].size();
        int total_element= m*n;
        
        int startingRow=0;
        int endingCol=n-1;;
        int endingRow=m-1;
        int startingCol=0;
        
        
        int count=0;
        while(count< total_element){
            
            //printiung staring row
            for(int i =startingCol; i<= endingCol  && count< total_element; i++){
                ans.push_back(matrix[startingRow][i]);
                 count++;

            }
            startingRow++;
            
            
            //printing ending col
             for(int i =startingRow; i<= endingRow  && count< total_element; i++){
                ans.push_back(matrix[i][endingCol]);
                  count++;
            }
            endingCol--;
            
            //priting end row
             for(int i =endingCol; i>= startingCol  && count< total_element; i--){
                ans.push_back(matrix[endingRow][i]);
                  count++;
            }
            endingRow--;
            
              //priting start col
             for(int i =endingRow; i>= startingRow  && count< total_element; i--){
                ans.push_back(matrix[i][startingCol]);
                  count++;
            }
            startingCol++;
        }
        return ans;
    }
};



