class FreqStack {
public:
    unordered_map<int,stack<int>> st;
    unordered_map<int,int> freq;
    int maxfreq;
    FreqStack() {
    maxfreq=0;
    }
    
    void push(int val) {
        int f=freq[val]+1;
        
        freq[val]++;
        
        st[f].push(val);
        maxfreq=max(maxfreq,f);
    }
    
    int pop() {
   int ans = st[maxfreq].top();
        st[maxfreq].pop();
        freq[ans]--;
        if(st[maxfreq].empty()){
            maxfreq--;
        }
        
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
