#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000] = {0};
    int i;
    int *arr = NULL;
    
    scanf("%[^\n]s", s);
    
    arr = (int *)malloc(10 * sizeof(int));
    memset(arr, 0, 10 * sizeof(int));
    
    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
            arr[(int)(s[i] - '0')]++;
    }
    
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    return 0;
}
