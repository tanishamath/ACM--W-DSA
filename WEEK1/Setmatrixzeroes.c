void setZeroes(int** matrix, int matrixSize, int *matrixColSize) {
    int i,j;
    int k=0;
    int maxzeroes= matrixSize * (*matrixColSize);
    int arr[maxzeroes];
    int arr2[maxzeroes];
    for(i=0;i<matrixSize;i++)
    {
        for(j=0;j< *matrixColSize;j++)
        {
            if(matrix[i][j]==0)
            {  
               arr[k] = i;
               arr2[k] = j;
               k++;
            
            }
            

        }
    }
    for(i=0;i<k;i++)
    {
        
            int row;
            int col;
            row=arr[i];
            col=arr2[i];
            
            for(j=0;j< *matrixColSize;j++)
            {
                matrix[row][j]=0;


            }
            for(int y=0;y<matrixSize;y++)
            {
                matrix[y][col]=0;
            }


        
    }
    
}