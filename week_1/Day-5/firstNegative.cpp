vector<long long> printFirstNegativeInteger(long long int a[],
long long int n, long long int k) {
    
    int l=0, r=0;
    vector<long long>ans;
    deque<long long>tmp;
    
    
    while(r<n)
    {
        if(a[r]<0) tmp.push_back(a[r]);
        if(r-l+1 == k)
        {
            if(tmp.size() == 0) ans.push_back(0);
            else 
            {
                ans.push_back(tmp.front());
                if(a[l] == tmp.front()) tmp.pop_front();
            }
            
            r++,l++;
        }
        else r++;
    }
    
    return ans;
                                              
 }
