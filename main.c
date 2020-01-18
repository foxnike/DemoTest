int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int low,high,mid;
    low=0;
    high=numsSize-1;
    while(low<high)
    {
        mid=(low+high)/2;
        if(target<=nums[mid])
            high=mid;
        else
            low=mid+1;
    }
    if(low<=numsSize-1&&nums[low]==target)
        returnSize[0]=low;
    else
        returnSize[0]=-1;
    low=0;high=numsSize-1;
    while(low<high)
    {
        mid=(low+high)/2;
        if(target<nums[mid])
            high=mid;
        else
            low=mid+1;
    }
    if(low<=numsSize-1&&nums[low-1]==target)
        returnSize[1]=low-1;
    else
        returnSize[1]=-1;
    return returnSize;
}
