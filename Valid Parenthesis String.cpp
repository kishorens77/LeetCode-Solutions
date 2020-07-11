class Solution {
public:
    bool checkValidString(string s) {
        int len=s.length()-1,count1=0,count2=0;
        for(int i=0; i<=len; ++i)
        {
            if(s[i]!=')')   count1++;
            else count1--;
            
            if(s[len-i]!='(')   count2++;
            else   count2--;
            
            if(count1<0||count2<0)  return false;
        }
        if(count1<0||count2<0)  return false;
        else
        return true;
    }
};
