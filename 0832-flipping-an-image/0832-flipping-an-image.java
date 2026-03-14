class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int ans[][] = new int[image.length][image[0].length];
        for(int i=0;i<image.length;i++)
        {
        int n=image[0].length-1;;
        for(int j=0;j<(image[0].length)/2;j++)
        {
            int c=image[i][j];
            image[i][j]=image[i][n];
            image[i][n]=c;
            n--;
        }
        }
        for(int i=0;i<image.length;i++)
        {
        for(int j=0;j<image[0].length;j++)
        {
        System.out.print(image[i][j]);
        }
        System.out.println("");
        }
        for(int i=0;i<image.length;i++)
        for(int j=0;j<image[0].length;j++)
        {
        if(image[i][j]==1)
        ans[i][j]=0;
        else
        ans[i][j]=1;
        }
        return ans;
    }
        
}