//ham nhap mang
void nhapmang(int a[],int&n)
{
	do{
		printf_s("nhap so phan tu trong mang");
		scanf_s("%d",&n);
	}while(n<1||n>max);
	for(int i=0;i<n;i++){
		printf_s("a[%d]=",i);
		scanf_s("%d",&a[i]);
	}
}
//ham xuat mang
void xuatmang(int a[],int n){
	for(int i=0 ;i<n;i++)
	printf_s("%d",a[i]);
	}
//ham chinh
void main(){
	int a[max],n;
	nhapmang(a,n);
	printf_s("mang vua nhap:")
	xuatmang(a,n);
	_getch();
}
}
