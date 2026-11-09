class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currentBalance=0,totalBalance=0;
        int n=gas.size(),start=0;
        for(int i=0;i<gas.size();i++){
            int balance = gas[i] - cost[i];
            totalBalance += balance;
            currentBalance += balance;
            if(currentBalance < 0){
                start=i+1;
                currentBalance=0;
            }
        }
        return totalBalance < 0 ? -1 : start;
    }
};