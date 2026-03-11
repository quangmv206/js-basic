//
#include <stdio.h>
#include <stdbool.h>

bool kiemTraSoNguyenTo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
   
    return true;
}

int main() {
    int n;

    printf("Nh?p vào m?t s? nguyên duong n: ");
    scanf("%d", &n);

    if (kiemTraSoNguyenTo(n)) {
        printf("%d là s? nguyên t?.\n", n);
    } else {
        printf("%d không ph?i là s? nguyên t?.\n", n);
    }

    return 0;
}
//-------------------------
#include <stdio.h>
#include <math.h>

int kiemTraSoChinhPhuong(int n) {
    int sqrtN = (int)sqrt(n);  
    return (sqrtN * sqrtN == n);  
}

int main() {
    int n;

    printf("Nh?p vào m?t s? nguyên duong n: ");
    scanf("%d", &n);

    if (kiemTraSoChinhPhuong(n)) {
        printf("%d là s? chính phuong.\n", n);
    } else {
        printf("%d không ph?i là s? chính phuong.\n", n);
    }

    return 0;
}
//---------------------------
#include <stdio.h>

int kiemTraSoHoanThien(int n) {
    int tong = 0;
    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    
    return tong == n;
}

int main() {
    int n;

    printf("Nh?p vào m?t s? nguyên duong n: ");
    scanf("%d", &n);

    if (kiemTraSoHoanThien(n)) {
        printf("%d là s? hoàn thi?n.\n", n);
    } else {
        printf("%d không ph?i là s? hoàn thi?n.\n", n);
    }

    return 0;
}
//-----------------------
#include <stdio.h>

#include <stdio.h>

void demChuSo(int n) {
    int dem = 0;

    while (n > 0) {
        dem++;       
        n /= 10;     
    }

    printf("S? %d có %d ch? s?.\n", n, dem);
}
int main() {
    int n;

    printf("Nh?p vào m?t s? nguyên duong n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("S? nh?p vào không ph?i là s? nguyên duong.\n");
        return 1;
    }
    demChuSo(n);  
    return 0;
}

//---------------------------
#include <stdio.h>

#include <stdio.h>

void tongCacChuSo(int n) {
    int tong = 0;
    
    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }
    
    printf("T?ng các ch? s? c?a s? là: %d\n", tong);
}

void main() {
    int n;

    printf("Nh?p vào m?t s? nguyên duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("S? nh?p vào không ph?i là s? nguyên duong.\n");
        return;
    }

    tongCacChuSo(n);  // G?i hàm tính t?ng các ch? s? và in ra k?t qu?
}
//--------------------
#include <stdio.h>

void demChuSo(int n, int chan, int le) {
    chan = 0;
    le = 0;

    while (n > 0) {
        int chuSo = n % 10;
        if (chuSo % 2 == 0) {
            chan++; 
        } else {
            le++; 
        }
        n /= 10; 
    printf("So luong chu so chan: %d\n", chan);
    printf("So luong chu so le: %d\n", le);
}
int main() {
    int n;
    
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    int chan = 0, le = 0;
    demChuSo(n, chan, le);
    
    return 0;
}
//---------------------
#include <stdio.h>

int tinhTongUoc(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i; 
        }
    }
    
    return tong;
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    
    int tongUoc = tinhTongUoc(n);
    printf("Tong cac uoc cua %d la: %d\n", n, tongUoc);
    
    return 0;
}
//-----------------
#include <stdio.h>

int timChuSoDauTien(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    int chuSoDauTien = timChuSoDauTien(n);
    printf("Ch? s? d?u tiên c?a %d là: %d\n", n, chuSoDauTien);
    return 0;
}
//--------------------
	#include <stdio.h>
	
	int kiemTraChuaToanLe(int n) {
	    while (n > 0) {
	        int chuSo = n % 10; 
	        if (chuSo % 2 == 0) {  
	            return 0;  
	        }
	        n /= 10;  
	    return 1; 
	}
	
	int kiemTraChuaToanChan(int n) {
	    while (n > 0) {
	        int chuSo = n % 10;  
	        if (chuSo % 2 != 0) { 
	            return 0;  
	        }
	        n /= 10;  
	    }
	    return 1;  
	}
	// Hàm tính t?ng các ch? s? l?
int tinhTongCacChuSoLe(int n) {
    int tong = 0;
    while (n > 0) {
        int chuSo = n % 10;
        if (chuSo % 2 != 0) {  // Ki?m tra n?u là s? l?
            tong += chuSo;
        }
        n /= 10;  // Xóa ch? s? cu?i cùng
    }
    return tong;
}
	int main() {
	    int n;
	    
	    
	    printf("Nhap so nguyen duong n: ");
	    scanf("%d", &n);
	    
	 
	    if (kiemTraChuaToanLe(n)) {
	        printf("Tat ca cac chu so cua %d deu la le.\n", n);
	    } else {
	        printf("So %d co chu so chan.\n", n);
	    }
	    
	
	    if (kiemTraChuaToanChan(n)) {
	        printf("Tat ca cac chu so cua %d deu la chan.\n", n);
	    } else {
	        printf("So %d co chu so le.\n", n);
	    }
	
	    return 0;
	}





