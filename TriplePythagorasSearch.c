#include <stdio.h>
#include <math.h>

int main() {
    /* Deklarasi variabel yang diperlukan */
    float raw_m,raw_n;
    int m,n,side1,side2,hypotenuse;
    /* membuat fungsi for loop untuk menangani input dari user*/
    for (int i=0;;i++) {
        printf("Masukan nilai m : "); 
        /* assign nilai raw_m dan mengecek apakah nilai inputan valid */
        if (!(scanf("%f",&raw_m)==1)) {
            clearerr(stdin); // bersihkan input yg error
            scanf("%*s"); // mengabaikan input yg error
            printf("Wrong Input!\nOnly number are allowed!\n\n");
            continue;
        }
        printf("Masukan nilai n : ");
        /* assign nilai raw_m dan mengecek apakah nilai inputan valid */
        if (!(scanf("%f",&raw_n)==1)) {
            clearerr(stdin); // bersihkan input yg error
            scanf("%*s"); // mengabaikan input yg error
            printf("Wrong Input!\nOnly number are allowed!\n\n");
            continue;
        }
        /* Mengubah nilai raw_m dan raw_n menjadi interger */
        m = raw_m; // assign nilai raw_m ke m
        n = raw_n; // assign nilai raw_n ke n
        /* Membuat fungsi untuk memastikan m dan n adalah interger,m>n dan m,n>0 */
        if (!((m+n)>m&&(m-n)>0&&((m+n)==(raw_m+raw_n)))) {
            printf("m and n should be a positive interger and m should be greater than n!\n\n");
        } else {
            side1 = pow(m,2)-pow(n,2);
            side2 = 2*m*n;
            hypotenuse = pow(m,2)+pow(n,2);
            break;
        }
    }
    printf("Side1 : %d\nSide2 : %d\nHypotenuse : %d",side1,side2,hypotenuse); // print hasil ke console

    return 0;
}
