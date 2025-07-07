char* greatestLetter(char* word) {
    int i, j, c, n, k, f;
    char* ans = (char*)malloc(20000 * sizeof(char));
    char grt = '0';
    k = 0;
    c = 0;
    n = strlen(word);
    for (i = 0; i < n; i++)
     {
        f = 0;
        for (j = 0; j < i; j++) 
            if (word[i] == word[j]) 
            {
                f = 1;
                break;
            }
        
        if (f == 0)
         {
            word[k] = word[i];  
            k++;
        }
    }
    for (i = 0; i < k; i++) 
    {
        if (word[i] >= 'a' && word[i] <= 'z')
         {
            for (j = i+1; j < k; j++)
             {
                if (toupper(word[i]) == word[j])
                 {
                    if (grt < toupper(word[i])) 
                        grt = toupper(word[i]);
                 }
            }
        } 
        else 
        {
            for (j = i+1; j < k; j++) 
            {
                if (tolower(word[i]) == word[j]) 
                    if (grt < word[i]) 
                        grt = word[i];
            }
        }
    }
    if (grt != '0') 
    {
        ans[0] = grt;
        ans[1] = '\0';
        return ans;
    }

    ans[0] = '\0';
    return ans;
}