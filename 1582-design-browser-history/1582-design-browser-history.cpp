class BrowserHistory {
public:
    stack<string>backward,forwardst;
    string current;
    BrowserHistory(string homepage) {
        current=homepage;
    }
    
    void visit(string url) {
        backward.push(current);
        current=url;
        while(!forwardst.empty()){
            forwardst.pop();
        }
    }
    
    string back(int steps) {
        while(steps>0 && !backward.empty()){
            forwardst.push(current);
            current=backward.top();
            backward.pop();
            steps--;
        }
        return current;
    }
    
    string forward(int steps) {
       while(steps>0 && !forwardst.empty()){
            backward.push(current);
            current=forwardst.top();
            forwardst.pop();
            steps--;
        }
        return current;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */