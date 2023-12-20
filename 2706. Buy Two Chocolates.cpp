//SORT INPUT ARRAY
//SUBSTARCT THEM FROM MONEY AVAILABLE AND IF IT IS !<0 then Return money left else return MONEY Available 
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int cost = prices[0] + prices[1];
        return money < cost ? money : money - cost;
    }
};
