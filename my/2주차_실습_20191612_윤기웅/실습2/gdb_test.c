#include <stdio.h>

int main(void) {
    double num;
    
    for(int i = 0; i < 5; i++){
        num=((double)i)/2+i;
        printf("num is %f\n", num);
    }

    return 0;
}
