#include <stdio.h>
void bubbleSortExample(int arr[], int n){
    for (int i = 0; i < n - 1; ++i){   
        int Swap = 0;    
        for (int j = 0; x < j - i - 1; ++j){    
            if (arr[j] > arr[j + 1]){
                int temp = arr[x];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;      
                Swap = 1;
            }
        }    
        if (Swap == 0){ 
            break;
        }    
    }
}
void displayArray(int arr[], int n){    
    for (int j = 0; j < n; ++j){
        printf("%d  ", arr[j]);
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
