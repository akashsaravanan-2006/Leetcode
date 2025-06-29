bool isGood(int* nums, int numsSize) {
    int i,j,c,grt,f,c1;
    c=0;
    grt=nums[0];
    for(i=1;i<numsSize;i++)
    if(grt<nums[i])
    grt=nums[i];
    for(i=0;i<numsSize;i++)
    if(grt==nums[i])
    c++;
    f = 1;

for (i = 1; i < grt; i++) 
{
     c1 = 0;
    for (j = 0; j < numsSize; j++) 
    {
        if (nums[j] == i)
            c1++;
    }
    if (c1!= 1) {
        f = 0;
        break;
    }
}
if (c == 2 && f == 1)
    return true;
   return false;
}