class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n = ops.size();
        vector<int> res;
        for(auto& num : ops)
        {
            if (num!="C" && num!="D" && num!="+")
            {
                res.push_back(stoi(num));
            }
            else if (num=="C")
            {
                if(!res.empty())
                res.pop_back();
            }
            else if (num=="D")
            {
                int m = res.size();
                res.push_back(res[m-1]*2);
            }
            else
            {
                int m2 = res.size();
                if (m2>=2)
                {res.push_back(res[m2-1]+res[m2-2]);}
            }
        }
        int sum=0;
        for(int i=0;i<res.size();i++)
        {
            sum+=res[i];
        }
        return sum;
    }
};