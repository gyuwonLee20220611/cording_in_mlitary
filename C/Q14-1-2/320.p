/*세개의 변수를 입력받고 서로 뒤바뀌는 프로그램을 만들어라
ex) input = 4 ,5 ,6
    output = 6, 4 , 5 */
    
#include <stdio.h>

int swap3(int * ptr1, int * ptr2, int * ptr3) {
        int num1, num2;
        num1 = *ptr1;
        
        *ptr1 = *ptr3;
        *ptr3 = *ptr2;
        *ptr2 = num1;
}
        

int main(){
    int num1, num2, num3;
    
    printf("정수를 3개 입력해주세요: ");
    scanf("%d %d %d",&num1, &num2 ,&num3);
    
    printf("num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
    swap3(&num1, &num2, &num3);
    printf("num1 = %d, num2 = %d, num3 = %d", num1, num2, num3);
    
}
