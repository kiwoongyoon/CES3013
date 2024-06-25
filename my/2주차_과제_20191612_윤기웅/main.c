#include <stdio.h>
#include <string.h>
#include "task.h"

int main() {
    int testcase ; //몇 개의 숫자를 확인할 것인가 
    scanf("%d", &testcase) ; 
    for (int t = 0 ; t < testcase ; t++ ){
        
    int n;
    int number_dict[10] = {0}; // 0에서 9까지 숫자의 출현 횟수를 저장할 배열 초기화
    //숫자 입력받는다
    scanf("%d", &n);
    count_nums(n, number_dict); // 숫자 출현 횟수 계산
    print_cnts(number_dict); // 계산된 출현 횟수 출력

    }
    return 0;
}