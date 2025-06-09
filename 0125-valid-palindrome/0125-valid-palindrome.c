bool isPalindrome(char* s) {
    int n,i,k;
    n=strlen(s);
    char a[n];
    char b[n];
    k=0;
for(i=0;i<n;i++)
{
if(s[i] >='a' && s[i]<='z'  || s[i] >='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9' )
{
        if(s[i] >='A' && s[i]<='Z')
        a[k]=tolower(s[i]);
        else
        a[k]=s[i];
        k++;
}
}
    k=0;
for(i=n-1;i>=0;i--)
{
if(s[i] >='a' && s[i]<='z'  || s[i] >='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9' )
{
        if(s[i] >='A' && s[i]<='Z')
        b[k]=tolower(s[i]);
        else
        b[k]=s[i];
        k++;
}
}
for(i=0;i<k;i++)
   if(a[i]!=b[i])
   {
    printf("%c",a[i]);
    return false;
   }
return true;


}