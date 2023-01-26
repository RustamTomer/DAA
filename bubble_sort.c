#include <stdio.h>
void bubbleSortExample(int arr[], int n){
    for (int i = 0; i < n - 1; ++i){   
        int Swap = 0;    
        for (int x = 0; x < n - i - 1; ++x){    
            if (arr[x] > arr[x + 1]){
                int temp = arr[x];
                arr[x] = arr[x + 1];
                arr[x + 1] = temp;      
                Swap = 1;
            }
        }    
        if (Swap == 0){ 
            break;
        }    
    }
}
void displayArray(int arr[], int n){    
    for (int x = 0; x < n; ++x){
        printf("%d  ", arr[x]);
    }    
    printf("\n");
}
int main(){
  int data[] = {27, 13, -54, 93, -20};  
  int n = sizeof(data) / sizeof(data[0]);
  bubbleSortExample(data, n);  
  printf("Array after implementing bubble sort: \n");
  displayArray(data, n); 
}
