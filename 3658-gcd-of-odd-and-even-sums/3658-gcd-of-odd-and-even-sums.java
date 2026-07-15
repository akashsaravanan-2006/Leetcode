class Solution {
    public int gcdOfOddEvenSums(int n) {
        int a=0,b=0;
        for(int i=1;i<=n*2;i++)
        {
        if(i%2==0)
        a=a+i;
        b=b+i;
        }
        System.out.println(a+" "+b);
        if(a>b)
        {
            for(int i=a;i>=1;i--)
            if(a%i==0 && b%i==0)
            return i;
        }
        for(int i=b;i>=1;i--)
            if(a%i==0 && b%i==0)
            return i;
            return b;
    }
}