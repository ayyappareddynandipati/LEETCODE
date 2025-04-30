class CustomStack {
public:
    vector<int>st;
    int size;
    CustomStack(int maxSize) {
        size=maxSize;
    }
    
    void push(int x) {
        if(st.size()<size){
            st.push_back(x);
        }
    }
    
    int pop() {
        int n = st.size();
        if(n==0){
            return -1;
        }
        int num = st[n-1];
        st.pop_back();
        return num;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k && i<st.size();i++){
            st[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */