#include<stdio.h>
int main(){
	int arr[100];
	int n, choice, max, sum, min;
	int i;
	do{
		printf("1.Nhap so phan tu va gia tri cho mang ");
		printf("2.In ra gia tri cac phan tu trong mang theo dang \n");
		printf("3. tim gia tri nho nhat va lon nhat trong mang");
		printf("4.In ra tong cua tat ca cac phan tu \n");
		printf("5. them mot phan tu vao cuoi mang");
		printf("6.Xoa phan tu tai mot vi tri cu the(nguoi dung nhap vi tri)\n");
		printf("7.Sap xep mang theo thu tu giam dan(bubble sort)\n");
		printf("8.kiem tra phan tu co trong mang hay khong\n");
		printf("9. in ra toan bo so nguyen trong mang\n");
		printf("10.sap xep mang theo thu tu tang dan\n");
		printf("11. thoat\n");
		printf("Moi ban nhap lua chon\n");
		scanf("%d",&choice);
		switch(choice) 
        {
			case 1://Nh?p s? ph?n t? và giá tr? cho m?ng	
				printf("Nhap so gia tri \n ");
				scanf("%d",&n);
				for(int i = 0; i < n; i++){
					printf("Nhap phan tu arr[%d]\n",i);
					scanf("%d",&arr[i]);
				}
			

                break;
            case 2://In ra gia tri cac phan tu trong mang theo dang
            	for(int i = 0; i < n; i++){
            		printf("Phan tu co trong mang la %d\n",arr[i]);
				}
				
            	break;
            case 3://Tìm giá tr? nh? nh?t và l?n nh?t trong m?ng
                max = arr[0];
                for(int i = 0; i < n; i++){
                	if(arr[i] > max){
                		max = arr[i];
					}
					
				}
				min = arr[i];
				for(int i = 0; i < n; i ++){
					if(arr[i] < min)
					min = arr[i];
					
				}
				printf("gia tri lon nhat la %d",max);
					printf("gia tri nho nhat la %d",min);
            	break;
            case 4://n ra t?ng c?a t?t c? các ph?n t?
            
            	break;
            case 5://Thêm m?t ph?n t? vào cu?i m?ng, ph?n t? m?i thêm vào m?ng ph?i do ngu?i dùng nh?p và
                printf("nhap phan tu cuoi mang\n");
                for(int i = 0; i < n; )
            	break;
            	
            case 6://Xóa ph?n t? t?i m?t v? trí c? th? (ngu?i dùng nh?p v? trí)
                
            	break;
            	
            case 7:
            	break;
            case 8:
            	
            	break;
            

            default: 
            
                break;
			
		}

	} while (choice != 11);
	
	
	return 0;
}
