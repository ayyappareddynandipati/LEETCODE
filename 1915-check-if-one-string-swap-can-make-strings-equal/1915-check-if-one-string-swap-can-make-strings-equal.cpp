class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int cnt=0,n=s1.size();
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                cnt++;
                arr.push_back(s1[i]);
                arr.push_back(s2[i]);
            }
        }
        return (cnt==0 || (cnt==2 && arr[0]==arr[3] && arr[1]==arr[2]));
    }
};