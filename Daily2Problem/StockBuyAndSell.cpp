#include<cmath>
#include<algorithm>
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maximum=0;
//         int n = prices.size();
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 int a = prices[j]-prices[i];
//                 maximum=  max(maximum, a);
//             }
//         }
//         return maximum;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};