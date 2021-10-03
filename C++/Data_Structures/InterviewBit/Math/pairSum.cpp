bool isPrime(int A)
{
    if(A < 2)
        return 0;
        
    for(int i = 2; i * i <= A; i++)
    {
        if(A % i == 0)
            return 0;
    }
    
    return 1;
}
 
vector<int> Solution::primesum(int A) {
    vector<int> ans;
    for(int i = 2; i <= A; i++)
    {
        if(isPrime(i) && isPrime(A-i))
        {
            ans.push_back(i);
            ans.push_back(A-i);
            break;
        }
    }
    
    return ans;
}