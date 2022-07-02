int sqrtN(long long int N)
{
    int s = 0;
    unsigned int e = N;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    
    while(s<=e)
    {
        long long int square = mid*mid;
        if(square == N)
        {
            return mid;
        }
        else if(square<N)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
