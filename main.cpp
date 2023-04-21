#include<stdio.h>
#include<stdint.h>
#include<math.h>
using namespace std;
class hinhChuNhat{
    private:
        int8_t chieuDai;
        int8_t chieuRong;
        double duongCheo;
    public:
        hinhChuNhat(int8_t chieuDai, int8_t chieuRong);
        void tinhChuVi();
        void tinhDienTich();
        void tinhDuongCheo();
        void checkHinhVuong();
};
hinhChuNhat::hinhChuNhat(int8_t chieuDai, int8_t chieuRong){
    this->chieuDai = chieuDai;
    this->chieuRong = chieuRong;
}
void hinhChuNhat::tinhDuongCheo(){
    this->duongCheo = sqrt(pow(chieuDai,2)+pow(chieuRong,2));
    printf("Duong cheo: %.2f\n",duongCheo);
}
void hinhChuNhat::tinhChuVi(){
    int8_t c = 2*(chieuDai+chieuRong);
    printf("Chu vi: c = %d\n",c);
}
void hinhChuNhat::tinhDienTich(){
    int8_t s = chieuDai*chieuRong;
    printf("Dien Tich: s = %d\n",s);
}
void hinhChuNhat::checkHinhVuong(){
    if(chieuDai == chieuRong)printf("Day la hinh vuong\n");
    else printf("Day khong phai la hinh vuong\n");
}
int main(){
    hinhChuNhat hcn(3,3);
    hcn.tinhChuVi();
    hcn.tinhDienTich();
    hcn.tinhDuongCheo();
    hcn.checkHinhVuong();
    hinhChuNhat hcn2(3,4);
    hcn2.checkHinhVuong();
    hcn2.tinhDuongCheo();
    return 0;
}