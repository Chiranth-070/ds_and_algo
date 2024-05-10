// 71. Simplify Path

class Solution {
public:
    void check(string s,stack<string> &stk)
    {
        if(s.empty())
        return;
        if(s.length()==1 && s[0]=='.')
        return ;
        else if(s.length()==2 && s[0]=='.' && s[1]=='.')
        {
            if(!stk.empty())
            stk.pop();
            return;
        }
        else
        stk.push(s);
    }
    
    
    string simplifyPath(string path) {
        stack<string> stk;
        string s,ans;

        for(int i=1;i<path.length();i++)
        {
            if(path[i]=='/')
            {
                check(s,stk);
                s="";
            }
            else
            {
                s+=path[i];
            }
        }
        check(s,stk);

        if(stk.empty())
        return "/";

        while(!stk.empty())
        {
            ans="/"+stk.top()+ans;
            stk.pop();
        }
        return ans;
    }
};