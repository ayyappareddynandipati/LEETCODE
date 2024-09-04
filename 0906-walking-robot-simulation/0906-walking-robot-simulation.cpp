class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>> st;
        for(int i=0;i<obstacles.size();i++)
        {
            st.insert({obstacles[i][0],obstacles[i][1]});
        }
        vector<pair<int,int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
        int x = 0,y = 0,d = 0,result = 0;
        for(int i=0;i<commands.size();i++)
        {
            if(commands[i]==-1) d=(d+1)%4;
            if(commands[i]==-2) d=(d+3)%4;
            else{
                for(int j=0;j<commands[i];j++){
                    int dx=dir[d].first, dy=dir[d].second;
                    if(st.contains({x+dx, y+dy})) break;
                    x+=dx;
                    y+=dy;
                }
            }
            result = max(result,x*x+y*y);
        }  
        return result;
    }
};