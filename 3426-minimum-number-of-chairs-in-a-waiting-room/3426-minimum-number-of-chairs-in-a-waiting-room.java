class Solution {
    public int minimumChairs(String s) {
        int cnt1=0,cnt2=0;
        for(int i=0;i<s.length();i++)
        {
            char c = s.charAt(i);
            if (c=='E') 
            {
                cnt1++;
            }
            else if (c=='L') 
            {
                cnt1--;
            }
            if (cnt1>cnt2) 
            {
                cnt2=cnt1;
            }
        }
        return cnt2;
    }
}