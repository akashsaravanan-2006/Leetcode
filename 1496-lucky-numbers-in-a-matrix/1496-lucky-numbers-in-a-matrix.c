/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int* ans = (int*)malloc(1 * sizeof(int));
    int a[100], a1[100], i, j, sml, m = 0, grt;

    if (*matrixColSize == 1) 
    {
        grt = matrix[0][0];
        for (i = 0; i < matrixSize; i++)
            if (grt < matrix[i][0])
                grt = matrix[i][0];
        ans[0] = grt;
        *returnSize = 1;
        return ans;
    } 
    else if (matrixSize == 1) 
    {
        sml = matrix[0][0];
        for (i = 0; i < *matrixColSize; i++)
            if (sml > matrix[0][i])
                sml = matrix[0][i];
        ans[0] = sml;
        *returnSize = 1;
        return ans;
    } 
    else if (matrixColSize != 0 && matrixSize != 0)
     {
        m = 0;
        for (i = 0; i < matrixSize; i++)
         {
            sml = matrix[i][0];
            int col = 0;
            for (j = 1; j < *matrixColSize; j++) 
            {
            if (matrix[i][j] < sml) 
            {
                    sml = matrix[i][j];
                    col = j; 
                }
            }

            grt = sml;
            for (j = 0; j < matrixSize; j++) {
                if (matrix[j][col] > grt) {
                    grt = matrix[j][col];
                }
            }

            if (grt == sml) {
                ans[0] = sml;
                *returnSize = 1;
                return ans;
            }
        }
    }

    *returnSize = 0;
    return ans;
}
