class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int i;
        int maxpro= 0;
        for(i = 1 ; i< prices.size();i++){
if (prices[buy]<prices[i]){
int pro=prices[i]-prices[buy];
maxpro=max(maxpro,pro);

}
else buy=i;

        }
      return maxpro;  
    }
};
;