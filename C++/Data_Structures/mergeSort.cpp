class Solution {
public:
    //mergesort O(nlogn)
    vector<int> sortt(vector<int> &A){
        
        if(A.size() == 1)
            return A;
        
        int mid = (A.size() - 1) / 2;
        
        vector<int> left;
        vector<int> right;
        
        for(int i = 0; i <= mid; i++){
            left.push_back(A[i]);
            right.push_back(A[A.size()-i-1]);
        }
        
        if(A.size() & 1)
            right.pop_back();
        
        left = sortt(left);
        right = sortt(right);
        
        for(int i = 0, j = 0, k = 0; i < left.size() || j < right.size();k++){
            
            int l = 1e9, r = 1e9;
            
            if(i < left.size())
                l = left[i];
            
            if(j < right.size())
                r = right[j];
            
            if(l <= r){
                A[k] = left[i];
                i++;                
            }
            
            else {
                A[k] = right[j];
                j++;
            }
            
        }
        
        left.clear();
        right.clear();
        return A;
    }
        
     
    
    vector<int> sortArray(vector<int>& A) {
        //worst case O(nlogn) always better than qs O(n^2) 
        int i = 0;
        for(i = 0; i < A.size() - 1; i++){
            if(A[i] > A[i+1])
                break;
        }
        
        if(i == A.size() - 1) return A;
        
        A = sortt(A);
        
        return A;
    }
};