#include <stdio.h>

void NumDivider(int * arr){
    int arr_1[10];
    int j = 0;
    int k = -1;
    for (int i = 0; i < 10; i++){
        
        if (arr[i] % 2 == 1){
            arr_1[j] = arr[i];
            j++;
        }
        else if(arr[i] % 2 == 0){
            arr_1[k] = arr[i];
            k--;
        }
        
        
    }
    for(int i = 0 ; i < 10; i++){
        printf("%d ", arr_1[i]);
    }
}

int main (){
    int arr[10];
    printf("총 10개의 숫자 입력\n");
    for (int i = 0; i < 10; i++){
        printf("입력: ");
        scanf("%d",&arr[i]);
    }
    NumDivider(arr);
    
    
}
