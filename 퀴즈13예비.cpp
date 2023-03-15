#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>

#include <termio.h>   
#define MAX 50 
static char p[9]="qwer1234"; 
int size; 
   
typedef struct  
{ 
     char *name; 
      
 
 
     char *phone; 
 }Phone; 
   
 void print();                    
 void output(Phone *);   
 void enroll(Phone *);
 void delete_content(Phone *);     
 void find(Phone *);             
 int getch();
 
   
 int main() 
 { 
     int number; 
     Phone book[MAX]; 
   
     while (1) 
     { 
         print(); 
         scanf("%d", &number); 
          
         if (number == 1) enroll(book); 
         else if (number == 2) output(book); 
         else if (number == 3) find(book);
		 else if (number == 4) delete_content(book); 
         else if (number == 5) break; 
         else  
         { 
             printf("\nThe number is wrong. please type again.\n"); 
        } 
         printf("\n"); 
   } 
   
     return 0; 
 } 
 
 int getch(void){
    int ch;
    struct termios buf, save;
    tcgetattr(0,&save);
    buf = save;
    buf.c_lflag &= ~(ICANON|ECHO);
    buf.c_cc[VMIN] = 1;
    buf.c_cc[VTIME] = 0;
    tcsetattr(0, TCSAFLUSH, &buf);
    ch = getchar();
    tcsetattr(0, TCSAFLUSH, &save);
    return ch;
}
  
 void enroll(Phone *a)  
 { 
     char name[10]; 
     char phone[15]; 
  
  	int i;  
  	int x=0; 
 	int count=0; 
 	int re=0; 
 	FILE *fw = fopen("phonebook.txt", "w");
	FILE *fa = fopen("phonebook.txt", "a");
 	for(i=0; i<3; i++){ 
 		char pw[100]; 
 		if(i==0) printf("\nPassword : "); 
 		else printf("\n%d Incorrect password!\nPassword :  ", i); 
 		scanf("%s",pw); 
 		if(strcmp(p,pw)==0) { 
 		printf("\nName : "); 
   		scanf("%s",name); 
   		
  		fprintf(fw, "\n%s", name);
  		fclose(fw);
  		
     	a[size].name = (char*)malloc(sizeof(Phone) * (strlen(name)+1)); 
	   	strcpy(a[size].name,name); 
  	 
     	printf("\nPhone Num : "); 
     	scanf("%s",phone); 
     	
     	fprintf(fa, "\n%s", phone);
     	fclose(fa);
   
     	a[size].phone = (char*)malloc(sizeof(Phone) * (strlen(phone) + 1)); 
       	strcpy(a[size].phone, phone); 
      
   
     	printf("\n%s is registered!\n", a[size].name); 
     	getch(); 
     	size++; 
 		 
 		 
 		break; 
 	} 
 	count=count+1; 
 	} 
 	if (count==3) { 
 	printf("\n3rd Incorrect password!\nYou cannot register new phone number.\nThe Phonebook manager is terminated!"); 
 	exit(1); 
 	} 
 	 
      
 } 
 
 
void delete_content(Phone *a) 

{

    int i;

    int index=-1;

    char name[10];



    if (size == 0)

    {

        printf("\nThere are anything to terminating.\n");


        getch();


        return;

    }



    printf("\nDeletion : ");

    scanf("%s",name);



   

    for (i = 0; i < size; i++) 

    {

        if (strcmp(name, a[i].name) == 0)

        {

            index = i;

            break;

        }

    }
    if (index == -1) 

    {

        printf("\nNo search result found.\n");


        getch();


        return;

    }

    else

    {

        printf("\n%s is deleted.\n", a[index].name);


        for (i = index; i < size-1; i++)

            {

            strcpy(a[i].name, a[i + 1].name);

            strcpy(a[i].phone, a[i + 1].phone);

        }




        getch();

		 free(a[size-1].name);

        free(a[size-1].phone);

        size--;

    }

}
   
 void output(Phone *a) 
 { 
     int i; 
     printf("\n\n<<  Phone Number List  >>\n"); 
   
     for (i = 0; i < size; i++)  
     { 
         printf("%s  %s\n",a[i].name,a[i].phone); 
     } 
      
     getch();
 } 
   
 void find(Phone *a){ 
 	int i=0; 
 	printf("Name :"); 
 	char inputname[10]; 
 	scanf("%s",inputname); 
 	 for (i = 0; i < size; i++)  
     { 
   	if(strcmp(inputname,a[i].name)==0) 
       printf("\n%s  %s\n",a[i].name,a[i].phone); 
         break; 
     }  
     getch();  
 } 
 
  void print()  
 { 
     printf("<< Phonebook Manager >>\n\n"); 
     printf("1.Registration	2.Total List	3.search	4. Deletion	5.Exit \n\n"); 
     printf("Select Menu:  \b\b"); 
 } 

