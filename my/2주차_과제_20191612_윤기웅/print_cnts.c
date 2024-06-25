#include <stdio.h>
#include "task.h"

// 출현 횟수가 저장된 배열을 출력하는 함수
void print_cnts(int number_dict[]) {
    int i;
    //0부터 차례대로 횟수 출력하기 
    for (i = 0; i < 10; i++) {
        printf("%d " , number_dict[i]) ; 
        // if (number_dict[i] > 0) {
        //     printf("%d ", number_dict[i]);
        // }
    }
    printf("\n"); // 모든 숫자 출력 후 줄바꿈
}