int countValidWords(char* sentence) {
    int i, j, c, f, s;
    f = 0;
    s = 0;
    c = 0;
    int n = strlen(sentence);
    for (i = 0; i <= n; i++) 
    {
        if (sentence[i] == ' ' || sentence[i] == '\0') 
        {
            f = 0;
            if (s < i) 
            {
                int x = 0;
                int y = 0;
                for (j = s; j < i; j++) 
                {
                    if (sentence[j] >= '0' && sentence[j] <= '9') {
                        f = 1;
                        break;
                    }

                    if (sentence[j] == '-') {
                        x++;
                        if (x > 1 || j == s || j == i - 1 ||
                            !(sentence[j - 1] >= 'a' && sentence[j - 1] <= 'z') ||
                            !(sentence[j + 1] >= 'a' && sentence[j + 1] <= 'z')) {
                            f = 1;
                            break;
                        }
                    }

                    if (sentence[j] == '!' || sentence[j] == '.' || sentence[j] == ',') {
                        y++;
                        if (y > 1 || j != i - 1) {
                            f = 1;
                            break;
                        }
                    }

                    if (!((sentence[j] >= 'a' && sentence[j] <= 'z') || 
                          sentence[j] == '-' || 
                          sentence[j] == '!' || 
                          sentence[j] == '.' || 
                          sentence[j] == ',')) {
                        f = 1;
                        break;
                    }
                }
                if (f == 0)
                    c++;
            }
            s = i + 1;
        }
    }
    return c;
}
