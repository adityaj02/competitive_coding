class Solution {
public:
int sumsquare(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit*digit;
        n/=10;
    }
    return sum;


}
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=sumsquare(slow);
            fast=sumsquare(sumsquare(fast));
        }while(slow!=fast);
        return slow==1;
        
    }
};