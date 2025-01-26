int maxSubArray(int* nums, int numsSize) {
    int i,j;
    int max =nums[0];
    int current=0;
    for(i=0;i<numsSize;i++)
    {
        current=nums[i]+current;
        
        if(current>max)
        {
            max=current;
        }
        if (current<0)
        {
            current =0;
        }
        
        
    }
    return max;
    
}