 #include<stdio.h>

int fabonico(int n) {
    if (n == 1 || n == 2) 
        return 1;
    else
        return fabonico(n - 1) + fabonico(n - 2); 
}

int main() {
    int n, i;
    printf("Up to how many numbers do you want to calculate the Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", fabonico(i));
    }
    printf("\n");
    return 0;
}
