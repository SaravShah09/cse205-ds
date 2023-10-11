class Solution {
public:
string customSortString(string order, string s) {
    string str,str2;
    int flag=0,i,j,k=0;
    sort(s.begin(),s.end());
    for(i=0;i<order.length();i++)
    {
        for(j=0;j<s.length();j++)
        {
            if(order[i]==s[j])
            {
                str+=s[j];
            }
        }
    }
    cout<<s<<endl;
    for(int i=0;i<s.length();i++)
    {
        flag=0;
        for(int j=0;j<str.length();j++)
        {
            if(s[i]==str[j])
            {
                flag=1;
                cout<<s[i];
                break;
            }
            else continue;
        }
        if(flag==0)
        str2+=s[i];
    }
    return str+str2;
    }
};