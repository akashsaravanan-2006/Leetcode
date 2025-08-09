/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
long long* sumOfThree(long long num, int* returnSize) {
    long long*ans=(long long*)malloc(4*sizeof(long long));
    int m=0;
    if(num%3==0)
    {
        ans[m++]=(num/3)-1;
        ans[m++]=(num/3);
        ans[m++]=(num/3)+1;
        *returnSize=m;
        return ans;
    }
    *returnSize=m;
    return ans;
}