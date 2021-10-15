#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int xeploai(asmm,lythuyet,thuchanh);
	int asmm,lythuyet,thuchanh;
	int xl;
	char luachon;
	do{
		printf(" Nhap diem asm : ");
		scanf("%d", &asmm);
		printf(" Nhap diem ly thuyet : ");
		scanf("%d", &lythuyet);
		printf(" Nhap diem thuc hanh : ");
		scanf("%d",&thuchanh);
		
		xl = xeploai(asmm,lythuyet,thuchanh);
		
		switch(xl){
			case 0:
				printf(" Truot \n");
			break;
			
			case 1:
				printf(" Trung binh \n");
			break;
			
			case 2:
				printf(" Kha \n");
			break;
			
			case 3:
				printf(" Gioi \n");
			break;
			
		}
		fflush(stdin);
		printf(" Tiep tuc tra cuu ??? :\n");
		printf(" Y : Co \n ");
		printf(" N : Khong \n");
		scanf("%c",&luachon);
		
		printf("%c",luachon);
	}while (luachon=='Y' || luachon=='y');
	
	if (luachon != 'Y' && luachon != 'y')
		printf(" Tam biet ");
	return 0 ;
}

int xeploai( int asmm , int lythuyet , int thuchanh )
{
	float xl = (float)( asmm + lythuyet + thuchanh )/3;
		if(xl < 40 )
			return 0;
		else if( xl >= 40 && xl <= 60)
				return 1;
		else if(xl > 60 && xl < 79)
		    	return 2;
		else if(xl >=80 )
				return 3;
}
	return 0;
}
