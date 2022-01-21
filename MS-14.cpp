void mini(int s,int D,int i,int& m)
{
    if(abs(s)>D)
    return;
    if(s==D)
    {
        if(i-1<m)
        m=i-1;
        return;
    }
    mini(s-i,D,i+1,m);
    mini(s+i,D,i+1,m);
}
    int minSteps(int D){
        int s=0;
        int i=1;
        while(s<D)
        {
          s+=i;
          i++;
        }
        if((s-D)%2==0)
        return i-1;
        else
        if((s-D+i)%2==0)
        return i;
        else
        return i+1;
    }
