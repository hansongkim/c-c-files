#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <termio.h>

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
void find(Phone *);            
int getch(void);
 
int main()
{
    int number;
    Phone book[50];
 
    while (1)
    {
        print();
        scanf("%d", &number);
        
        if (number == 1) enroll(book);
        else if (number == 2) output(book);
        else if (number == 3) find(book);
        else if (number == 4) break;
        else 
        {
            printf("\n\t\t���� �߸��Է��Ͽ����ϴ� �ٽ� �Է��ϼ���\n");
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
 
 
	int x=0;
   int count=0;
   int re=0;
   int i;
   for(i=0; i<3; i++){
      char pw[100];
      if(i==0) printf("\n��й�ȣ : ");
      else printf("\n��й�ȣ(%dȸ����): ", i);
      scanf("%s",pw);
      if(strcmp(p,pw)==0) {
      printf("\n����� �̸� : ");
       scanf("%s",name);
 
       a[size].name = (char*)malloc(sizeof(Phone) * (strlen(name)+1));
       strcpy(a[size].name,name);
    
       printf("\n��ȭ ��ȣ : ");
       scanf("%s",phone);
 
       a[size].phone = (char*)malloc(sizeof(Phone) * (strlen(phone) + 1));
         strcpy(a[size].phone, phone);
    
 
       printf("\n%s ���� ��� �Ϸ�!\n", a[size].name);
       printf("\n��� �ϽǷ��� �ƹ�Ű�� Ŭ���ϼ���\n");
       getch();
       size++;
          system("cls");
      
      
      break;
   }
   count=count+1;
   }
   if (count==3) {
   printf("\n��й�ȣ(3ȸ����): ����Ҽ�����!\n\n���α׷��� �����մϴ�. ");
   exit(1);
   }
   
    
}
 
void output(Phone *a)
{
    int i;
    printf("\n\n<<��ȭ��ȣ���>>\n");
 
    for (i = 0; i < size; i++) 
    {
        printf("%s  %s\n",a[i].name,a[i].phone);
    }
    
    printf("\n\n��� �ϽǷ��� �ƹ�Ű�� Ŭ���ϼ���\n");
    getch();
    system("cls");
}
 
void find(Phone *a){
   int i=0;
   printf("�˻��� �̸� :");
   char inputname[10];
   scanf("%s",inputname);
    for (i = 0; i < size; i++) 
    {
       if(strcmp(inputname,a[i].name)==0)
        printf("\n%s  %s\n",a[i].name,a[i].phone);
        break;
    }
    printf("\n\n��� �ϽǷ��� �ƹ�Ű�� Ŭ���ϼ���\n");
    getch();
    system("cls");
}

void print() 
{
    printf("��ȭ��ȣ ����\n\n");
    printf("1.���   2.��ü�˻�   3.Ư���ΰ˻�   4.���� \n\n");
    printf("�޴� ����:  \b\b");
}

