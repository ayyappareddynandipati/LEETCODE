class Solution {
bool isVowel(char a,char b )
{
    return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') &&
                   (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u');
}
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> res;
        for(int i=0;i<words.size();i++)
        {
            string s = words[i];
            int n = s.size();
            if(isVowel(s[0],s[n-1]))
            {
                res.push_back(1);
            }
            else
            {
                res.push_back(0);
            }
        }
        vector<int> prefix_sum(res.size(), 0);
        prefix_sum[0] = res[0];
        for (int i = 1; i < res.size(); i++) {
            prefix_sum[i] = prefix_sum[i - 1] + res[i];
        }
        vector<int> final;
        for(int i=0;i<queries.size();i++)
        {
            int j = queries[i][0],k=queries[i][1];
            int ans = prefix_sum[k] - (j > 0 ? prefix_sum[j - 1] : 0); 
            final.push_back(ans);
        }
        return final;
    }
};