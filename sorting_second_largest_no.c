 #include<stdio.h>
    int INT_MIN;
    int secondLargest(int arr[], int len) {

    int max        = INT_MIN;
    int second_max = INT_MIN;
 
     for(int i = 0; i < len; i++) {
 
         if(arr[i] > max) {
              second_max = max;
              max = arr[i]; 
          }
 
          if(max > arr[i] && arr[i] > second_max) {
               second_max=arr[i];
           }
      }
 
      return second_max;
 }
 
     int main(void) {
 
     int arr[] = {13,87,56,1,9,34,65,54,12,43,98};
     int len   = 11;
 
      printf("Second highest element is %d\n",secondLargest(arr,len));
      return 0;
}
 
