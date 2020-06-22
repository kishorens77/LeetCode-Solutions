class Solution {
public:
    string longestPalindrome(string s) 
    {
    int n=s.length();
    if(n<=1)    return s;
    else
        {
            string ans="";
                ans+=s[0];
            for(float i=0.5; i<n; i+=0.5)
            {
                int left =(int)(i-0.5);
                int right=(int)(i+1);
                char ch=s[left];
                while(left>=0 and right<n)
                {
                if(s[left]==s[right])
                {
                    if(right-left+1 > ans.length()) 
                        ans=s.substr(left, right-left+1);
                }
                else 
                break;
                --left;
                ++right;
                }
            }
        return ans;
        }
    }
};
