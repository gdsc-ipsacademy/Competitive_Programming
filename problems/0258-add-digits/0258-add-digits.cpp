class Solution {
public:
    int addDigits(int num) {
        int n=num;
        long sum=0;
        while(true){
            while(n!=0){
                int mod=n%10;
                 sum=sum+mod;
                n=n/10;
            }
            if(0<=sum && sum<=9){
                break;
            }
            n=sum;
            sum=0;
        }
        return sum;
    }
};