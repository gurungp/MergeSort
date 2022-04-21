//
//  MergeSort.h
//  MergeSort
//
//  Created by Prashant Gurung on 13/04/2022.
//

#ifndef MergeSort_h
#define MergeSort_h

void merge(int *arr, int lb, int mid, int rb){
    
    int subArrSizeLeft = mid - lb + 1;
    int subArrSizeRight = rb - mid;
    
    int leftArr[subArrSizeLeft];
    int rightArr[subArrSizeRight];
    
    for(int i=0; i < subArrSizeLeft; i++ ){
        leftArr[i] = arr[lb+i];
    }
    
    for(int i=0; i < subArrSizeRight; i++)
    {
        rightArr[i] = arr[mid + 1 + i];
    }
    
    int x=0,y=0,k=lb; //pointer to sub-arrays and the main array
    
    while(x<subArrSizeLeft && y<subArrSizeRight)
    {
        if(leftArr[x]<=rightArr[y])
        {
            arr[k] = leftArr[x];
            x++;
        }
        else
        {
            arr[k] = rightArr[y];
            y++;
        }
        k++;
    }
    
    while(x<subArrSizeLeft)
    {
        arr[k] = leftArr[x];
        x++;
        k++;
    }
    
    while(y<subArrSizeRight)
    {
        arr[k] = rightArr[y];
        y++;
        k++;
    }
    
}
void mergeSort(int *arr, int l, int r){
    
    if(l<r)
    {
        int mid = (l+r)/2;
        
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

#endif /* MergeSort_h */
