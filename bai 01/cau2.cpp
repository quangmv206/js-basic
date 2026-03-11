//1 + 3 + 5 + ... + (2n+1)
#include <stdio.h>
int main() {
    int n, i, tong = 0;

    printf("Nh?p vào n: ");
    scanf("%d", &n);

    for(i = 1; i <= 2*n + 1; i += 2) {
        tong += i;
    }

    printf(" 1 + 3 + 5 + ... + (2n+1) là: %d\n", tong);

    return 0;
}
//-----------------------------
#include <stdio.h>
int main() {
    int n, i, tong = 0;

    printf("Nh?p vào n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 1) {  
            tong += i;
        } else {  
            tong -= i;
        }
    }
    printf(" 1 - 2 + 3 - 4 + ... + (-1)^(n+1) là: %d\n", tong);
    return 0;
}
//---------------------
#include <stdio.h>

int main() {
    int n, i, j;
    long long tong = 0, tich;

    printf("Nh?p vào n: ");
    scanf("%d", &n);

   
    for(i = 1; i <= n; i++) {
        tich = 1; 
        for(j = 1; j <= i; j++) {
            tich *= j;  
        }
        tong += tich;  
    }

    printf(" 1 + 1*2 + 1*2*3 + ... + 1*2*3*...*n là: %lld\n", tong);

    return 0;
}
//-----------------
#include <stdio.h>

int main() {
    int n, i;
    long long tong = 0;

    printf("Nh?p vào n: ");
    scanf("%d", &n);

    // Tính t?ng 1^2 + 2^2 + 3^2 + ... + n^2
    for(i = 1; i <= n; i++) {
        tong += i * i;  // C?ng bình phuong c?a i vào t?ng
    }

    printf(" 1^2 + 2^2 + 3^2 + ... + n^2 là: %lld\n", tong);

    return 0;
}
//--------------------
#include <stdio.h>

// Hàm tính luy th?a c?a s? x v?i s? mu y
long long luyThua(int x, int y) {
    long long ketQua = 1;
    for(int i = 1; i <= y; i++) {
        ketQua *= x;
    }
    return ketQua;
}

int main() {
    int n, i;
    long long tong = 0;

    printf("Nh?p vào n: ");
    scanf("%d", &n);

    // Tính t?ng 1 + 2^2 + 3^3 + ... + n^n
    for(i = 1; i <= n; i++) {
        tong += luyThua(i, i);  // C?ng i^i vào t?ng
    }

    printf(" 1 + 2^2 + 3^3 + ... + n^n là: %lld\n", tong);

    return 0;
}

//-------------------
#include <stdio.h>

int main() {
    int n, i;
    long long tich = 1;  // Kh?i t?o tích b?ng 1

    printf("Nh?p vào n: ");
    scanf("%d", &n);

    // Tính tích 1 * 2 * 3 * ... * n
    for(i = 1; i <= n; i++) {
        tich *= i;  // Nhân d?n vào tich
    }

    printf(" 1 * 2 * 3 * ... * n là: %lld\n", tich);

    return 0;
}
//----------------------
#include <stdio.h>

int main() {
    int n;
    double tong = 0.0;

    printf("Nh?p vào n: ");
    scanf("%d", &n);

    
    for(int i = 1; i <= n; i++) {
        tong += 1.0 / i;  
    }

    printf("1 + 1/2 + 1/3 + ... + 1/n là: %.6lf\n", tong);

    return 0;
}

