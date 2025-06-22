

bool isSubsequence(char* s, char* t) {
    int n, m, i, j, x;
    n = strlen(s);
    m = strlen(t);
    x = -1;

    for (i = 0; i < n; i++) 
        for (j = x + 1; j < m; j++)
            if (s[i] == t[j]) 
            {
                t[j] = '0';
                s[i] = '0'; 

                if (x > j)
                {
                    return false;
                }

                x = j;
                break;
            }
for(i=0;i<n;i++)
if(s[i]!='0')
return false;
return true;
}
