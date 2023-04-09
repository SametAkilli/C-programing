#include <stdio.h>
#include <string.h>

void rr(char *str, int n) {
    int len = strlen(str);
    n = n % len;

    
    for (int i = len - 1; i >= n; i--) {
        *(str + i) = *(str + i - n);
    }

    
    for (int i = 0; i < n; i++) {
        *(str + i) = *(str + len - n + i);
    }

    *(str + len) = '\0'; 
}

int main() {
    char str[] = "bu bir test metnidir.";
    int n = 5;

    printf("Metin: %s\n", str);

    rr(str, n);

    printf("%d karakter saga kaydirilmis metin: %s\n", n, str);

    return 0;
}

