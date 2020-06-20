int transitionPoint(int arr[], int n) {
    // code here
   int l=0;
   int high=n-1;
   int mid=0;
   while(l<=high)
   {
       mid=((l+high)/2);
       if(arr[mid]==1 && arr[mid-1]!=1)
       return mid;
       else
       {
           if(arr[mid-1]==1)
           high=mid-1;
           else
           l=mid+1;
       }
   }
   return -1;
}
