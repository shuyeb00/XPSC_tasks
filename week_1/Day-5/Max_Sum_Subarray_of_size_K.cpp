class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long long sum = 0;
        long long ans = 0;
        
        int l=0,r=0;
        while(r<N)
        {
            sum += Arr[r];
            if(r-l+1 == K)
            {
                ans = max(ans,sum);
                sum -= Arr[l];
                l++;
                r++;
            
            }
            else r++;
        }
        
        return ans;
    }
};
