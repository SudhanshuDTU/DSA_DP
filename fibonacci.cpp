class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
         vector<long long> ans;
         long long prev1 = 1;
         long long prev2 = 1;
         long long curr;
         ans.push_back(prev1);
         if(n==1){
             return ans;
         }
         ans.push_back(prev2);
         if(n==2){
             return ans;
         }
         for(int i=3;i<=n;i++){
             curr = prev1 + prev2;
             prev2 = prev1;
             prev1 = curr;
             ans.push_back(curr);
         }
         
         return ans;
         
    }
};
