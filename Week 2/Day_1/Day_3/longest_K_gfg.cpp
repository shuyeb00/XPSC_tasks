class Solution{
  public:
    int longestKSubstr(string s, int k) {
        
        deque<char>dq;
        map<char,int>mp;
        int ans = -1;
        
        for(int i=0; i<s.size(); i++){
            dq.push_back(s[i]);
            mp[s[i]]++;
            
            while(mp.size() > k){
                mp[dq.front()]--;
                if(mp[dq.front()] == 0) mp.erase(dq.front());
                dq.pop_front();
            }
            
            if(mp.size() == k){
                ans = max(ans,int(dq.size()));
            }
        }
        
        return ans;
    }
};