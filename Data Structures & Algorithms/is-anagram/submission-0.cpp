class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m =t.size();

        if(n != m){
            return false;
        }
        string z = "";
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0; i<n; i++){   
                if(s[i] == t[i]){
                   z.push_back(s[i]);
                }
        }
        
        if(z.size() != n){
            return false;
        }
        return true;
    }
};
