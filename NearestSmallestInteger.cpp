vector<int> Solution::prevSmaller(vector<int> &A) {
    vector <int> G(A.size());
    G[0]=-1;
        
        stack <int> s;
        
        for(int i=0; i<A.size(); i++)
        {
            while(!s.empty()&&A[i]<=s.top())
            {
                s.pop();
            }
          
            if(s.empty())
            G[i]=-1;
            else G[i]=s.top();
            s.push(A[i]);
        }
        
    return G;
}
        
    
