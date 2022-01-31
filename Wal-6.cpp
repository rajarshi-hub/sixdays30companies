 long long powerofrev(int N,int R)
    {
        if(R == 1)
        return N;
        long long p = powerofrev(N,R/2);
        if(R % 2 == 0)
        {
            return (p*p)%mod;
        }
        else
        {
            return ((p*p)%mod*N)%mod;
        }
    }
    long long power(int N,int R)
    {
        return powerofrev(N,R);
        
    }
