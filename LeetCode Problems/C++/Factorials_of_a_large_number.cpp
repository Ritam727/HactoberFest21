class Solution {
public:
    
    vector<int> factorial(int N){
       vector<int>ans;
       ans.push_back(N);
       
       int carry = 0;
       
       for( int i = N-1; i > 1; i--){
           
           for(int j = 0; j < ans.size(); j++){
               int product = ans[j]*i + carry;
               ans[j] = product % 10;
               carry = product/10;
           }
           
           while(carry){
               ans.push_back(carry%10);
               carry = carry / 10;
           }
       }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};