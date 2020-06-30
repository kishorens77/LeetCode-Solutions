class Solution {
public:
    void nextPermutation(vector<int>& w) {
    unsigned long int index = w.size();
    while(--index>0)
    {
        if(w[index-1]<w[index])
            break;
    }
    if(index==0)    sort(w.begin(),w.end());
    else
    {
        unsigned long int i=w.size();
        while(w[--i]<=w[index-1]);        
        swap(w[i],w[index-1]);
        reverse(w.begin()+index,w.end());
    }
        
    }
};
