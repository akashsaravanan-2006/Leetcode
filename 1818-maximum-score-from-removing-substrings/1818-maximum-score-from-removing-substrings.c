int maximumGain(char* s, int x, int y) {
    int score = 0;
    int len = strlen(s);
    char stack[len + 1];
    int top = -1;

    char first1, second1, first2, second2;
    int val1, val2;

    if (x >= y) {
        first1 = 'a';
        second1 = 'b';
        val1 = x;

        first2 = 'b';
        second2 = 'a';
        val2 = y;
    } else {
        first1 = 'b';
        second1 = 'a';
        val1 = y;

        first2 = 'a';
        second2 = 'b';
        val2 = x;
    }

    for (int i = 0; s[i]; i++) {
        if (top >= 0 && stack[top] == first1 && s[i] == second1) {
            top--;
            score += val1;
        } else {
            stack[++top] = s[i];
        }
    }

    stack[++top] = '\0';
    top = -1;

    for (int i = 0; stack[i]; i++) {
        if (top >= 0 && s[top] == first2 && stack[i] == second2) {
            top--;
            score += val2;
        } else {
            s[++top] = stack[i];
        }
    }

    return score;
}
