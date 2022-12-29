class Solution {
    public int climbStairs(int n) {
        int a=0,b=1,c=a+b;
        if(n==0) return a;
        if(n==1) return b;
        else
        {
            for(int i=1;i<n;i++)
            {
                a=b;
                b=c;
                c=a+b;
            }
            return c;
        }
    }
}