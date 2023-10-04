class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>st1,st2;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && !st1.empty() ){
                st1.pop();
             
            }
            else if(s[i]!='#'){
                st1.push(s[i]);
            }
        }
         for(int i=0;i<t.size();i++){
            if(t[i]=='#' && !st2.empty() ){
                st2.pop();
             
            }
            else if(t[i]!='#'){
                st2.push(t[i]);
            }
        }
       string str1="";
       string str2="";
       while(!st1.empty()){
           str1+=st1.top();
           st1.pop();
       }
       while(!st2.empty()){
           str2+=st2.top();
           st2.pop();
       }

    return str1==str2;
    }
};