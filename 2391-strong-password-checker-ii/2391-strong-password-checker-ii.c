bool strongPasswordCheckerII(char* password) {
    int i,a,b,n,f,s;
    s=0;
    a=0;
    b=0;
    f=0;
    i=0;
    n=strlen(password);
    if(n<8)
    return false;
    while(password[i]!='\0')
    {
        if(password[i]>='0' && password[i]<='9')
        a++;
        else if(password[i]>='a' && password[i]<='z')
        b++;
        else if(password[i]>='A' && password[i]<='Z')
        s++;
        else
        f++;
        if(i > 0 && password[i] == password[i - 1])
        return false;
        i++;
    }
    if(a==0 || b==0 || s==0 || f==0 )
    return false;
    return true;
}
