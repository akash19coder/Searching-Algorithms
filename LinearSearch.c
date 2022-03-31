
#include<stdio.h>
#include<conio.h>

void create();
void display();
void search();

#define size 100
int arr[size];


void main(){
   char ans;
   int choice;
   int n;
   do{
     printf("Enter your choice\n");
     printf("1.Createn\n");
     printf("2.Display\n");
     printf("3.Search\n");
     scanf("%d",&choice);
     switch(choice){
       case 1:
       printf("How many values do you want to store?\n");
       scanf("%d",&n);
       create(n);
       break;

       case 2:
       display(n);
       break;

       case 3:
       search(5,n);
       break;

       default:
       printf("Please enter correct choice\n");
     }
     printf("\nDo you want to continue");
     ans=getch();
   }while(ans=='Y'||ans=='y');
}

void create(int n){
  int i;
  printf("Enter the values in array\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
}

void display(int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}

void search(int item,int n){
  int i;
  for(i=0;i<sizeof(arr)/n;i++){
    if(arr[i]==item){
      printf("The value exists in %d position",i+1);
    }
  }
}
