bool isAcronym(char** words, int wordsSize, char* s) {
    int n,i;
   n=strlen(s);
   if(n!=wordsSize) 
   return false;
   for (int i = 0; i < wordsSize; i++) {
        if (s[i] != words[i][0]) 
        {
            printf("%c\n", words[i][0]);
            return false;
        }
    }

   return true;
}