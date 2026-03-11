//dem chu a co trog chuoi
#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100]; 
    int soLuongA = 0;  
    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin); 
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == 'a' || chuoi[i] == 'A') {
            soLuongA++;
        }
    }
    printf("So luong ký tu 'a' trong chuoi: %d\n", soLuongA);

    return 0;
}
//viet chuong trình nhap vào mot chuoi dem xem chuoi vua nhap có bao nhiêu tu
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[100];
    int soLuongTu = 0, i = 0, dangTrongTu = 0;

    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin);

    while (chuoi[i] != '\0') {
        if (isalpha(chuoi[i])) {
            if (!dangTrongTu) {
                soLuongTu++;
                dangTrongTu = 1;
            }
        } else {
            dangTrongTu = 0;
        }
        i++;
    }

    printf("So luong tu trong chuoi: %d\n", soLuongTu);

    return 0;
}
//viet chuong trình nhap vào mot chuoi dem xem chuoi vua nhap có bao nhiêu khoang trang
#include <stdio.h>

int main() {
    char chuoi[100];
    int soLuongKhoangTrang = 0, i = 0;

    printf("Nh?p chu?i: ");
    fgets(chuoi,100, stdin);

    while (chuoi[i] != '\0') {
        if (chuoi[i] == ' ') {
            soLuongKhoangTrang++;
        }
        i++;
    }

    printf("So luong khoang trang trong chuoi: %d\n", soLuongKhoangTrang);

    return 0;
}



