class Solution {
public:
    int sumOfMultiples(int n) {
        int sum1=0;
        int sum2=0; int sum3=0;
        for(int i=1; i<=n; i++){
            if(i%3==0){
                sum1=sum1+i;
            }
            else  if(i%5==0){
                sum2=sum2+i;
            }
            else if(i%7==0){
                sum3=sum3+i;
            }
        }
        return(sum1+sum2+sum3);
    }
};