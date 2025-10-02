// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:program for local mobile service offer
*/


#include <stdio.h>
//main function 

int main() {
int choice ;

//prompt the user to enter choice 
printf("select data bundles,\n");
printf("1.100MB@50KES\n");
printf("2.500MB@200KES\n");
printf("3.1GB@350KES\n");
printf("4.2GB@600KES\n");

//prompt the user to enter choice
printf("enter your choice(1-4):");
scanf("%d",&choice);

//display data bundles selected 
if (choice ==1){
printf("100MB,cost=KES50\n");
}
else if (choice==2){
printf("500MB,cost=KES100\n");
}
else if(choice==3){
printf("1GB,cost=KES350\n");
}
else if(choice==4){
printf("2GB,cost=KES600\n");
}
else{
printf("invalid choice\n");
}

return 0;

}