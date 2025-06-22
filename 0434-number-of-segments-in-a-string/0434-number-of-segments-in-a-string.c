int countSegments(char* s) {
    int i,c;
    c= 0;
    i = 0;
    while (s[i]!='\0') 
    {
        if (s[i] != ' ' && (i==0 ||s[i - 1] == ' '))
        c++;
        i++;
    }

    return c;
}