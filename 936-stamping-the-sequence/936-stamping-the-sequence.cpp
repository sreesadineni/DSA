class Solution {
public:
     vector<int> movesToStamp(string stamp, string target) {
        int ls = stamp.size();int lt = target.size();
        vector<int> ans;
        bool has_changed = true;
        int end   = lt-ls;
        while (has_changed) {  
            has_changed = false;
            for(int i = 0; i<=end; i++) {            
                bool visited = true;                 
                bool any_change = true;             
                for (int j = 0; j<ls; j++) {
                    if (target[i+j] == '?') 
                        continue;  
                    
                    if(stamp[j] != target[i+j]) {
                        visited = false;
                        break;
                    }
                    any_change = false;
                }
                if (visited && !any_change) {          
                    ans.push_back(i);                  
                    
                    for (int j=0; j<ls; j++) 
                        target[i+j] = '?';
                    
                    has_changed = true;                 
                }
            }
        }
        for(int i = 0; i<lt; i++) {
            if (target[i] != '?') 
				return {};
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};