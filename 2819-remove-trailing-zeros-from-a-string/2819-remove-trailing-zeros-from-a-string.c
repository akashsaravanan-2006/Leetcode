char* removeTrailingZeros(char* num) {
    char* ans = (char*)malloc(20000 * sizeof(char));
    int n = strlen(num);
    int i;
    for (i = 0; i < n; i++)
        ans[i] = num[i];
    i = n - 1;
    while (i >= 0 && ans[i] == '0') {
        i--;
    }
    ans[i + 1] = '\0';

    return ans;
}