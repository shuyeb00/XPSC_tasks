class Solution{
public:
	int search(string pat, string txt) {
	    
	    vector<int>v1(26);
	    vector<int>v2(26);
	    
	    for(auto u : pat) v1[u-'a']++;
	    
	    int l=0,r=0;
	    int cnt = 0;
	    
	    while(r<txt.size())
	    {
	        v2[txt[r]-'a']++;
	        
	        if(r-l+1 == pat.size())
	        {
	            if(v1 == v2) cnt++;
	            v2[txt[l]-'a']--;
	            l++,r++;
	        }
	        else r++;
	    }
	    
	    return cnt;
	}

};
