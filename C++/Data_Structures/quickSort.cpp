class Solution {
public:
    //quicksort O(nlogn)
    void sortt(int start, int end, vector<int> &A){
        
        if(start >= end) return;

        int random = start +  (rand() % (end - start + 1)) ;

        
        swap(A[random], A[end]);
        
        int idx = start;
        for(int i = start; i < end; i++){
            if(A[i] <= A[end]){
                swap(A[idx],A[i]);
                idx++;
            }
        }
        
        swap(A[end],A[idx]);
        sortt(start,idx-1,A);
        sortt(idx+1,end,A);
    }
    
    vector<int> sortArray(vector<int>& A) {
        //if array is already sorted then TC O(n^2)
        int i = 0;
        for(i = 0; i < A.size() - 1; i++){
            if(A[i] > A[i+1])
                break;
        }
        
        if(i == A.size() - 1) return A;
        
        sortt(0,A.size()-1,A);
        
        return A;
    }
};