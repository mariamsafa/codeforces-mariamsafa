#include <stdio.h>

int main()
{
    int num1, value=0, i, j;
    char str1[4];

    scanf("%d", &num1);


    for(i=0 ; i<num1; i++ ) {
        gets(str1);
        for(j=0 ; j<3 ; j++) {
            if(str1[j]== '+') {
                value++;
                break;
            }
            else if(str1[j]== '-') {
                value--;
                break;
            }
        }

    }


    printf("%d", value);

    return 0;
}
