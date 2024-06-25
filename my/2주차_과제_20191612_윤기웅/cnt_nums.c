#include <stdio.h>
#include <string.h>
#include "task.h"

// 숫자를 문자열로 변환하여 각 숫자의 출현 횟수를 계산하는 함수
void count_nums(int n, int number_dict[]) {
    char string[11]; // 최대 10자리 숫자 + 널 문자를 위한 배열
    int i, j, length;
    for (i = 1; i <= n; i++) {
        //0부터 n가지의 모든 숫자를 반복문으로 돌면서 살핀다. 
        sprintf(string, "%d", i); // 숫자 i를 문자열로 변환
        length = strlen(string); // 변환된 문자열의 길이 계산
        
        for (j = 0; j < length; j++) {
            int k = string[j] - '0'; // 문자를 숫자로 변환
            number_dict[k] += 1;
        }
    }
}