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
            printf("\n\t\t수를 잘못입력하였습니다 다시 입력하세요\n");
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
      if(i==0) printf("\n비밀번호 : ");
      else printf("\n비밀번호(%d회실패): ", i);
      scanf("%s",pw);
      if(strcmp(p,pw)==0) {
      printf("\n등록할 이름 : ");
       scanf("%s",name);
 
       a[size].name = (char*)malloc(sizeof(Phone) * (strlen(name)+1));
       strcpy(a[size].name,name);
    
       printf("\n전화 번호 : ");
       scanf("%s",phone);
 
       a[size].phone = (char*)malloc(sizeof(Phone) * (strlen(phone) + 1));
         strcpy(a[size].phone, phone);
    
 
       printf("\n%s 정보 등록 완료!\n", a[size].name);
       printf("\n계속 하실려면 아무키나 클릭하세요\n");
       getch();
       size++;
          system("cls");
      
      
      break;
   }
   count=count+1;
   }
   if (count==3) {
   printf("\n비밀번호(3회실패): 등록할수없음!\n\n프로그램을 종료합니다. ");
   exit(1);
   }
   
    
}
 
void output(Phone *a)
{
    int i;
    printf("\n\n<<전화번호목록>>\n");
 
    for (i = 0; i < size; i++) 
    {
        printf("%s  %s\n",a[i].name,a[i].phone);
    }
    
    printf("\n\n계속 하실려면 아무키나 클릭하세요\n");
    getch();
    system("cls");
}
 
void find(Phone *a){
   int i=0;
   printf("검색할 이름 :");
   char inputname[10];
   scanf("%s",inputname);
    for (i = 0; i < size; i++) 
    {
       if(strcmp(inputname,a[i].name)==0)
        printf("\n%s  %s\n",a[i].name,a[i].phone);
        break;
    }
    printf("\n\n계속 하실려면 아무키나 클릭하세요\n");
    getch();
    system("cls");
}

void print() 
{
    printf("전화번호 관리\n\n");
    printf("1.등록   2.전체검색   3.특정인검색   4.종료 \n\n");
    printf("메뉴 선택:  \b\b");
}

