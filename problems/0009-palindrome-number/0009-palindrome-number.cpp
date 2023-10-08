class Solution {
public:
    

    
    bool isPalindrome(int x) {
        int temp=0;
             int num_copy = x;
             
             while(x>0){
                  if((temp>(INT_MAX)/10)  || temp<(INT_MIN)/10){
                return 0;
            }
                 temp = temp *10 + x%10;
                 x = x/10;
             }
             
             if(temp == num_copy){
                 return 1;
         }
         else
         {
             return 0;
         }
    }
};