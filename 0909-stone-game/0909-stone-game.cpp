class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int a=0,b=0,i=0,j=piles.size()-1,s1=0,s2=0;
        while(i<j){
            a+=max(piles[i],piles[j]);
            if(piles[i]>piles[j]) i++;
            else j--;
            b+=max(piles[i],piles[j]);
            if(piles[i]>piles[j]) i++;
            else j--;
        }
        int i1=0,j1=1;
        while(i1<piles.size()-1){
            s1+=piles[i1];
            i1=i1+2;
            s2+=piles[j1];
            j1=j1+2;
        }
        if(a>b || s1>s2 || s2>s1) return true;
        else return false;
    }
};