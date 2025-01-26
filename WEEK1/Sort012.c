void sortColors(int* nums, int numsSize) {
    
    int zero = 0, one = 0, two = 0;

    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            zero++;
        } else if (nums[i] == 1) {
            one++;
        } else if (nums[i] == 2) {
            two++;
        }
    }

    
    int j = 0;
    for (int i = 0; i < zero; i++) {
        nums[j++] = 0;
    }
    for (int i = 0; i < one; i++) {
        nums[j++] = 1;
    }
    for (int i = 0; i < two; i++) {
        nums[j++] = 2;
    }


    
}