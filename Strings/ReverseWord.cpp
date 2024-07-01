class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string str = "";
        
        

        for(int i=0; i<s.size(); i++){
            if(s[i]!= ' '){
                str+= s[i];
            }
            else if(!str.empty()){
                st.push(str);
                str="";
            }
        }
        
        // To push the last word to stack if there is any
        if (!str.empty()) {
            st.push(str);
        }
        
        string ans = "";
        
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) {
                ans += " ";
            }
        }
        
        return ans;
    }
};
