#include <stdio.h>
#include <math.h>

//bai1
void pt_bac_hai(float a, float b, float c){
	float delta = b*b - 4*a*c;
	if(delta >  0){
		printf("phuong trinh co 2 nghiem\n x_1 = %.2f va x2 = %.2f\n", (b + sqrt(delta))/(2*a) , (b - sqrt(delta))/(2*a));
	} else if (delta == 0 ){
		printf("phuong trinh co 1 nghiem kep la x = %.2f\n", b/(2*a));
	} else {
		printf("phuong trinh vo nghiem\n");
	}
}
//bai2
void check_point (float a){
	if ( a >= 0 && a <= 10){
		if ( a < 5){
		printf("Yeu\n");
		} else if ( a>= 5 && a < 7){
			printf("TB\n");
		} else if ( a>= 7 && a < 8){
			printf("Kha\n");
		} else if ( a >= 8 && a <9){
			printf("Gioi\n");
		} else {
			printf ("XS\n");
		}
	} else {
		printf("Diem khong hop le!\n");
	}
	
}
//bai3
void type__triangle (float a, float b, float c){
	
	 if (a + b > c && b + c > a && c + a > b) {
	 	printf("3 so %.2f %.2f %.2f tren tao thanh cac canh cua mot\n ",a ,b ,c);
		if (a == b && b == c){	
			printf ("Tam giac deu\n");
		} else if (a == b || b == c || c == a) {
			if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b){
				printf("Tam giac vuong can\n");	
			} else {
				printf("Tam giac can\n");
			}
		} else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b){
			printf("Tam giac vuong\n");
		} else {
			printf("tam giac thuong\n");
		}
	} else {
	 	printf("3 so %.2f %.2f %.2f tren khong tao thanh cac canh cua mot tam giac\n ",a ,b ,c);
	}
}
//bai 4
 void he_pt(float a, float b, float c, float d, float e, float f){
 	float detA = a*e - b*d;
 	printf("he phuong trinh:\n %.2fx + %.2fy = %.2f\n %.2fx + %.2fy = %.2f\n", a, b, c, d, e, f);
 	if (detA == 0){
 		if(a/d == b/d){
 			printf("He co vo so nghiem\n");
 			return;
		 } else {
		 	printf("He vo nghiem\n");
		 }
	 } else {
	 	printf("he co 2 nghiem la:\n x = %.2f va y = %.2f\n", (c*e - b*f)/detA, (a*f - c*d)/detA);
	 }
 }
//bai5
 void check__moth(unsigned int a, unsigned int b){
    if(a > 0 && a <=12){
    	if( a == 1 || a == 3 || a == 5 || a == 7 || a ==8 || a == 10 || a == 12){
    		printf("Thang %d nam %d co 31 ngay\n", a, b);
		}
		if( a == 4 || a == 6 || a == 9 || a == 11){
    		printf("Thang %d nam %d co 30 ngay\n", a, b);
		} else {
		  printf("Thang %d nam %d co 28 ngay\n", a, b);
		}
	} else {
		printf("Ngay hoac thang khong hop le !\n");
	}
 }
int main(){
	printf("Cac chuong trinh: \n 1. Giai phuong trinh bac 2\n 2. Kiem tra xep loai theo diem so\n 3. Kiem tra loai tam giac\n 4. Giai he phuong trinh bac nhat 2 an\n 5. Kiem tra so ngay trong thang\n");
	int selection, t;
	printf("Nhap chuong trinh muon chon: ");
	scanf("%d", &selection);
	switch (selection) {
		case 1://Giai phuong trinh bac 2
			
			printf("Nhap so Test Case: ");
			scanf("%d", &t);
			while(t--){
				float a, b, c;
				printf("Nhap cac he so cua phuong trinh ax^2 + bx + c = 0 (theo thu tu a -> c): ");
				scanf("%f %f %f" , &a, &b, &c);
				pt_bac_hai(a,b,c);
			}
			break;
		case 2: //Kiem tra xep loai theo diem so
		
			printf("Nhap so Test Case: ");
			scanf("%d", &t);
			while(t--){
				float a;
				printf("Nhap diem (he so 10): ");
				scanf("%f", &a);
				check_point(a);
			}
			break;
		case 3: //Kiem tra loai tam giac
		
			printf("Nhap so Test Case: ");
			scanf("%d", &t);
			while(t--){
				float a, b, c;
				printf("Nhap do dai 3 canh: ");
				scanf("%f %f %f", &a , &b, &c);
				type__triangle(a,b,c);
			}
			break;
		case 4: //Giai he phuong trinh bac nhat 2 an
			
			printf("Nhap so Test Case:");
			scanf("%d", &t);
			while (t--){
				float a, b, c ,d ,e ,f;
				printf("Nhap cac he so cho he pt 2 an\n ax + by = c\n dx + ey = f(theo thu tu a -> f): ");
				scanf("%f %f %f %f %f %f", &a ,&b, &c, &d, &e, &f);
				he_pt(a,b,c,d,e,f);
			}
			break;
		case 5: //Kiem tra so ngay trong thang
			
			printf("Nhap so Test Case:");
			scanf("%d", &t);
			while (t--){
				unsigned int a, b;
				printf("Nhap cac he so ngay, thang: ");
				scanf("%d %d", &a, &b);
				check__moth(a,b);
			}
			break;
	}
	return 0;
	}
