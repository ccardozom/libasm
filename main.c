#include "libasm.h"

int main()
{
	char str1[]="aola mundo que tal";
	char str2[]="hola njkl1234567";
	char str3[]="hola mundo que tal";
	char str4[]="qola muro de cristal";
	int len=0;

	printf("\t\t\tParte obligatoria\n\n");
	printf("*========== ft_strlen ==========*");
	printf("\n|\t\t\t\t|");
	len = strlen(str1);
	printf("\n| strlen\t= %d\t\t|",len);
	len = ft_strlen(str1);
	printf("\n| ft_strlen\t= %d\t\t|",len);
	printf("\n|\t\t\t\t|");
	printf("\n");
	printf("*===============================*");
	printf("\n");
	
	printf("*========== ft_strcpy ==========*");
	printf("\n| Antes\t\t\t\t|");
	printf("\n| str1\t= %s\t|",str1);
	printf("\n| str2\t= %s\t|",str2);
	strcpy(str1,str2);
	printf("\n| Despues\t\t\t|");
	printf("\n| str1\t= %s\t|",str1);
	printf("\n| str2\t= %s\t|",str2);
	printf("\n|\t\t\t\t|");

	printf("\n| Antes\t\t\t\t|");
	printf("\n| str3\t= %s\t|",str3);
	printf("\n| str2\t= %s\t|",str2);
	ft_strcpy(str3,str2);
	printf("\n| Despues\t\t\t|");
	printf("\n| str3\t= %s\t|",str3);
	printf("\n| str2\t= %s\t|",str2);
	printf("\n|\t\t\t\t|");
	printf("\n");
	printf("*===============================*");
	printf("\n");
	
	printf("*========== ft_strcmp ==========*");
	printf("\n|\t\t\t\t|");
	len = strcmp(str3, str4);
	printf("\n| strcmp\t= %d\t\t|",len);
	len = ft_strcmp(str3,str4);
	printf("\n| ft_strcmp\t= %d\t\t|",len);
	printf("\n|\t\t\t\t|");
	printf("\n");
	printf("*===============================*");
	printf("\n");
	
	printf("*=================== ft_write ==================*\n");
	printf("|\t\t\toriginal\t\t|\n");
	printf("| write \t\t\t\t\t|\n");
	len = write(1,"| hola\t\t\t\t\t\t|",13);
	printf("\n| write\t\t= %d\t\t\t\t|", len);
	printf("\n| Código errno\t= %d\t\t\t\t|",errno);
	printf("\n| Descripción\t= %s\t\t|\n",strerror(errno));
	printf("|\t\t\tcopia\t\t\t|\n");
	printf("| ft_write \t\t\t\t\t|\n");
	len = ft_write(1,"| hola\t\t\t\t\t\t|",13);
	printf("\n| write\t\t= %d\t\t\t\t|", len);
	printf("\n| Código errno\t= %d\t\t\t\t|",errno);
	printf("\n| Descripción\t= %s\t\t|",strerror(errno));
	printf("\n|\t\t\t\t\t\t|");
	printf("\n");
	printf("*===============================================*");
	printf("\n");

	printf("*=================== ft_read ==================*\n");
	printf("|\t\t\toriginal\t\t|\n");
	int fd;
	fd=open("text.txt",O_RDONLY);
	char *buff1;
	buff1=malloc(sizeof(char)*7);
	buff1[7]='\0';
	len = read(fd,buff1,3);
	printf("| read = %s\t\t\t\t\t|\n",buff1);
	printf("| read\t\t= %d\t\t\t\t|", len);
	printf("\n| Código errno\t= %d\t\t\t\t|",errno);
	printf("\n| Descripción\t= %s\t\t|\n",strerror(errno));
	
	printf("|\t\t\tcopia\t\t\t|\n");
	char *buff2;
	buff2=malloc(sizeof(char)*7);
	buff2[7]='\0';
	fd=open("text.txt",O_RDONLY);
	len = ft_read(fd,buff2,3);
	printf("| ft_read = %s\t\t\t\t\t|\n",buff2);
	printf("| read\t\t= %d\t\t\t\t|", len);
	printf("\n| Código errno\t= %d\t\t\t\t|",errno);
	printf("\n| Descripción\t= %s\t\t|",strerror(errno));
	printf("\n|\t\t\t\t\t\t|");
	printf("\n");
	printf("*===============================================*");
	printf("\n");
	

	char *s1=NULL;
	char cadena1[]="strdup original y copia";
	char *s2=NULL;
	printf("*=================== ft_strdup ==================*\n");
	printf("|\t\t\t\t\t\t|");
	s1 = strdup(cadena1);
	printf("\n| strdup\t= %s\t|",s1);
	s2 = ft_strdup(cadena1);
	printf("\n| ft_strdup\t= %s\t|",s2);
	printf("\n|\t\t\t\t\t\t|");
	printf("\n");
	printf("*===============================================*");
	printf("\n");

	return(0);
}
