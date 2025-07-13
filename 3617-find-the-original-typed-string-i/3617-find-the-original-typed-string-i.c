int possibleStringCount(char* word) {
    int i,c=0,n;
    n=strlen(word);
      for(i=0;i<n;i++) 
      if(word[i]==word[i+1])
      c++;
      return c+1;  
}