char* thousandSeparator(int n) {
    int i, j, c, m = 0, r;
    char* ans = (char*)malloc(2000 * sizeof(char));
    char a[100];
    if(n==0)
    {
        ans[0]='0';
        ans[1]='\0';
        return ans;
    }
    while (n != 0) {
        r = n % 10;
        a[m++] = r + '0';
        n = n / 10;
    }
    a[m] = '\0';
    j = m - 1;
    for (i = 0; i < m / 2; i++) {
        c = a[i]; 
        a[i] = a[j];
        a[j] = c;
        j--;
    }
    int x = 0;
    if (m < 4) 
    {
        for (i = 0; i < m; i++)
        ans[x++] = a[i];
        ans[x] = '\0';
        return ans;
    } 
    else {
        for (i = 0; i < m; i++)
         {
           if ((m-i)%3 == 0 && i!=0) 
            {
                ans[x++] = '.';
                ans[x++] = a[i];
            } 
            else
            {
                ans[x++] = a[i];
            }
        }
    }
    ans[x] = '\0';
    return ans;
}
