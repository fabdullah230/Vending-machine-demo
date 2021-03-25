#include <stdio.h>
#include <string.h>

void machine(char spaceA[], int pa, char spaceB[], int pb, char spaceC[], int pc, char spaceD[], int pd, char spaceE[], int pe, char A, char B, char C, char D, char E, char space[], int M, char b){

printf("*---------------------------*\n");
printf("|      Vending Machine      |\n");
printf("*---------------------------*\n");
printf("|   A    B    C    D    E   |\n");
printf("|  $%s%d  $%s%d  $%s%d  $%s%d  $%s%d  |\n",spaceA, pa, spaceB, pb, spaceC, pc,spaceD,pd,spaceE,pe); 
printf("|  [%c]  [%c]  [%c]  [%c]  [%c]  |\n",A,B,C,D,E);
printf("*---------------------------*\n");
printf("|                    [$%s%d]  |\n",space,M);
printf("|                           |\n");
printf("|           [=%c=]           |\n",b);
printf("*---------------------------*\n");

}
void choicemenu(){

  printf("\nWhat would you like to do?\n1. Read product information\n2. Insert coin\n3. Press product button\n4. Press return button\n9. Open service menu (code required)\n0. Quit\n");
  return;
}
void productinfo(char a[], char b[], char c[], char d[], char e[], int pa, int pb, int pc, int pd, int pe){
  printf("\n(1) The displayed products are:\nA. %s ($%d)\nB. %s ($%d)\nC. %s ($%d)\nD. %s ($%d)\nE. %s ($%d)\n", a,pa,b,pb,c,pc,d,pd,e,pe);

}
void coininsert(){
  printf("\n(2) Which coin would you like to insert?\n1. $1\n2. $2\n3. $5\n4. $10\n0. Go back\n");
}
void returnmoney(int m){
  printf("\n(4) Return button has been pressed.\n$%d has been returned.\n\n",m);

}

void servicemenu_access(){
  printf("(9) Opening service menu. Access code is required.\nEnter access code: ");
}

void service_inspect(int rev, int inscoin, char a[], int pa, int na, char b[], int pb, int nb, char c[], int pc, int nc, char d[], int pd, int nd, char e[], int pe, int ne ){
  printf("\n(9-1) Machine status\nAmount of revenue: $%d\nAmount of inserted coins: $%d\nProduct information:\nA. %s ($%d) (%d left)\nB. %s ($%d) (%d left)\nC. %s ($%d) (%d left)\nD. %s ($%d) (%d left)\nE. %s ($%d) (%d left)\n", rev,  inscoin,  a,  pa,  na,  b,  pb,  nb,  c,  pc,  nc,  d,  pd,  nd,  e,  pe,  ne );


}
void withdrawmoney(int a){
printf("\n(9-2) All money is being withdrawn.\n$%d is withdrawn.\n", a);
}
void refill(){
printf("\n(9-3) Which product would you like to refill?\n1. A\n2. B\n3. C\n4. D\n5. E\n0. Go back\n");
}

void changeproduct(){
  printf("\n(9-4) Which product would you like to change?\n1. A\n2. B\n3. C\n4. D\n5. E\n0. Go back\n");

}

void productwanted(){
  printf("\n(3) Which product button would you like to press?\n1. A\n2. B\n3. C\n4. D\n5. E\n0. Go back\n");
}

void servicemenu(){
  printf("\n(9) What would you like to do?\n1. Inspect machine status\n2. Withdraw all money\n3. Refill product\n4. Change product\n0. Go back\n");
}


















int main(void){

  int choice,  money_ins, revenue, na,nb,nc,nd,ne, pa,pb,pc,pd,pe;
  int a,b,c,d,e, button;
  
 

 char prodA[21]="Juice";
 char prodB[21]="Cola";
 char prodC[21]="Tea";
 char prodD[21]="Water";
 char prodE[21]="Coffee";

 pa=10; pb=6; pc=5; pd=8; pe=7;   na=5;nb=1;nc=2;nd=1;ne=9;

 money_ins=0; revenue=0; 

 a=32;b=32;c=32;d=32;e=32; button=61;
 choice=1;

char spacea[2]="";
char spaceb[2]="";
char spacec[2]="";
char spaced[2]="";
char spacee[2]="";

char space[2]="";


        if(money_ins>=10){strcpy(space, "");} else if(money_ins<10){strcpy(space, " ");}
        if(pa>=10){strcpy(spacea, "");} if(pa<10){strcpy(spacea, " ");}
        if(pb>=10){strcpy(spaceb, "");} if(pb<10){strcpy(spaceb, " ");}
        if(pc>=10){strcpy(spacec, "");} if(pc<10){strcpy(spacec, " ");}
        if(pd>=10){strcpy(spaced, "");} if(pd<10){strcpy(spaced, " ");}
        if(pe>=10){strcpy(spacee, "");} if(pe<10){strcpy(spacee, " ");}

        
 choice=2;
button=61;

  while(choice!=0){
    

        if(money_ins>=10){strcpy(space, "");} else if(money_ins<10){strcpy(space, " ");}
        
        if(money_ins>=pa && na>=1){a=79;} if(money_ins<pa && na>=1){a=32;} if(na<1){a=88;}

        if(money_ins>=pb && nb>=1){b=79;} if(money_ins<pb && nb>=1){b=32;} if(nb<1){b=88;}

        if(money_ins>=pc && nc>=1){c=79;} if(money_ins<pc && nc>=1){c=32;} if(nc<1){c=88;}

        if(money_ins>=pd && nd>=1){d=79;} if(money_ins<pd && nd>=1){d=32;} if(nd<1){d=88;}

        if(money_ins>=pe && ne>=1){e=79;} if(money_ins<pe && ne>=1){e=32;} if(ne<1){e=88;}

        if(pa>=10){strcpy(spacea, "");} if(pa<10){strcpy(spacea, " ");}
        if(pb>=10){strcpy(spaceb, "");} if(pb<10){strcpy(spaceb, " ");}
        if(pc>=10){strcpy(spacec, "");} if(pc<10){strcpy(spacec, " ");}
        if(pd>=10){strcpy(spaced, "");} if(pd<10){strcpy(spaced, " ");}
        if(pe>=10){strcpy(spacee, "");} if(pe<10){strcpy(spacee, " ");}

    if(choice==1){}
    
    else {machine(spacea,  pa, spaceb,  pb, spacec, pc,spaced, pd,spacee, pe, a,b, c, d, e, space, money_ins, button);}
    button=61;
    choicemenu();
    printf("Your choice:");
    scanf("%d",&choice);
  
    
    if(choice<0||choice>9|| (choice>4 && choice<9)){

      printf("Invalid choice!\n\n");
    }

    if(choice==1){

      productinfo(prodA, prodB, prodC, prodD, prodE,pa, pb, pc, pd, pe);
    } 

    else if(choice==2) {
      int coinchoice, test1=1;
      
      
      while (test1!=0){

      coininsert();
      printf("Your choice:");
      scanf("%d", &coinchoice);
      
      if(coinchoice==1){
        money_ins+=1;
        printf("You have inserted $1.\n\n");
        //here all the conditions for vending machine will be stacked 
        if(money_ins>=10){strcpy(space, "");} else if(money_ins<10){strcpy(space, " ");}
        
        if(money_ins>=pa && na>=1){a=79;} if(money_ins<pa && na>=1){a=32;} if(na<1){a=88;}

        if(money_ins>=pb && nb>=1){b=79;} if(money_ins<pb && nb>=1){b=32;} if(nb<1){b=88;}

        if(money_ins>=pc && nc>=1){c=79;} if(money_ins<pc && nc>=1){c=32;} if(nc<1){c=88;}

        if(money_ins>=pd && nd>=1){d=79;} if(money_ins<pd && nd>=1){d=32;} if(nd<1){d=88;}

        if(money_ins>=pe && ne>=1){e=79;} if(money_ins<pe && ne>=1){e=32;} if(ne<1){e=88;}

        if(pa>=10){strcpy(spacea, "");} if(pa<10){strcpy(spacea, " ");}
        if(pb>=10){strcpy(spaceb, "");} if(pb<10){strcpy(spaceb, " ");}
        if(pc>=10){strcpy(spacec, "");} if(pc<10){strcpy(spacec, " ");}
        if(pd>=10){strcpy(spaced, "");} if(pd<10){strcpy(spaced, " ");}
        if(pe>=10){strcpy(spacee, "");} if(pe<10){strcpy(spacee, " ");}

        machine(spacea,  pa, spaceb,  pb, spacec, pc,spaced, pd,spacee, pe, a,b, c, d, e, space, money_ins, button);
      }
      else if(coinchoice==2){
        money_ins+=2;
        printf("You have inserted $2.\n\n");
        if(money_ins>=10){strcpy(space, "");} else if(money_ins<10){strcpy(space, " ");}
        
        if(money_ins>=pa && na>=1){a=79;} if(money_ins<pa && na>=1){a=32;} if(na<1){a=88;}

        if(money_ins>=pb && nb>=1){b=79;} if(money_ins<pb && nb>=1){b=32;} if(nb<1){b=88;}

        if(money_ins>=pc && nc>=1){c=79;} if(money_ins<pc && nc>=1){c=32;} if(nc<1){c=88;}

        if(money_ins>=pd && nd>=1){d=79;} if(money_ins<pd && nd>=1){d=32;} if(nd<1){d=88;}

        if(money_ins>=pe && ne>=1){e=79;} if(money_ins<pe && ne>=1){e=32;} if(ne<1){e=88;}

        if(pa>=10){strcpy(spacea, "");} if(pa<10){strcpy(spacea, " ");}
        if(pb>=10){strcpy(spaceb, "");} if(pb<10){strcpy(spaceb, " ");}
        if(pc>=10){strcpy(spacec, "");} if(pc<10){strcpy(spacec, " ");}
        if(pd>=10){strcpy(spaced, "");} if(pd<10){strcpy(spaced, " ");}
        if(pe>=10){strcpy(spacee, "");} if(pe<10){strcpy(spacee, " ");}
         
        machine(spacea,  pa, spaceb,  pb, spacec, pc,spaced, pd,spacee, pe, a,b, c, d, e, space, money_ins, button);
      }
      else if(coinchoice==3){
        money_ins+=5;
        printf("You have inserted $5.\n\n");
        if(money_ins>=10){strcpy(space, "");} else if(money_ins<10){strcpy(space, " ");}
        
        if(money_ins>=pa && na>=1){a=79;} if(money_ins<pa && na>=1){a=32;} if(na<1){a=88;}

        if(money_ins>=pb && nb>=1){b=79;} if(money_ins<pb && nb>=1){b=32;} if(nb<1){b=88;}

        if(money_ins>=pc && nc>=1){c=79;} if(money_ins<pc && nc>=1){c=32;} if(nc<1){c=88;}

        if(money_ins>=pd && nd>=1){d=79;} if(money_ins<pd && nd>=1){d=32;} if(nd<1){d=88;}

        if(money_ins>=pe && ne>=1){e=79;} if(money_ins<pe && ne>=1){e=32;} if(ne<1){e=88;}

        if(pa>=10){strcpy(spacea, "");} if(pa<10){strcpy(spacea, " ");}
        if(pb>=10){strcpy(spaceb, "");} if(pb<10){strcpy(spaceb, " ");}
        if(pc>=10){strcpy(spacec, "");} if(pc<10){strcpy(spacec, " ");}
        if(pd>=10){strcpy(spaced, "");} if(pd<10){strcpy(spaced, " ");}
        if(pe>=10){strcpy(spacee, "");} if(pe<10){strcpy(spacee, " ");}
        
        machine(spacea,  pa, spaceb,  pb, spacec, pc,spaced, pd,spacee, pe, a,b, c, d, e, space, money_ins, button);
      }
      else if(coinchoice==4){
        money_ins+=10;
        printf("You have inserted $10.\n\n");
       if(money_ins>=10){strcpy(space, "");} else if(money_ins<10){strcpy(space, " ");}
        
        if(money_ins>=pa && na>=1){a=79;} if(money_ins<pa && na>=1){a=32;} if(na<1){a=88;}

        if(money_ins>=pb && nb>=1){b=79;} if(money_ins<pb && nb>=1){b=32;} if(nb<1){b=88;}

        if(money_ins>=pc && nc>=1){c=79;} if(money_ins<pc && nc>=1){c=32;} if(nc<1){c=88;}

        if(money_ins>=pd && nd>=1){d=79;} if(money_ins<pd && nd>=1){d=32;} if(nd<1){d=88;}

        if(money_ins>=pe && ne>=1){e=79;} if(money_ins<pe && ne>=1){e=32;} if(ne<1){e=88;}

        if(pa>=10){strcpy(spacea, "");} if(pa<10){strcpy(spacea, " ");}
        if(pb>=10){strcpy(spaceb, "");} if(pb<10){strcpy(spaceb, " ");}
        if(pc>=10){strcpy(spacec, "");} if(pc<10){strcpy(spacec, " ");}
        if(pd>=10){strcpy(spaced, "");} if(pd<10){strcpy(spaced, " ");}
        if(pe>=10){strcpy(spacee, "");} if(pe<10){strcpy(spacee, " ");}

        machine(spacea,  pa, spaceb,  pb, spacec, pc,spaced, pd,spacee, pe, a,b, c, d, e, space, money_ins, button);
      }
      else if(coinchoice==0){
        test1=0;
        printf("Going back!\n\n");
      }
      else {printf("Invalid Choice!\n\n");
      
      }
    }

 }
  else if(choice==3){
    int product, test2=1;
    productwanted();

    while(test2!=0){
      printf("Your choice:");
      scanf("%d", &product);
      
    
   if(product==1 && money_ins>=pa && na>0){
     printf("You have pressed button A.\n\n");          
     money_ins= money_ins-pa;
     revenue+=pa;
     button=65;
     na--;
     test2=0;
     }
   if(product==1 && money_ins<pa){}


   if(product==2&& money_ins>=pb&& nb>0){
     printf("You have pressed button B.\n\n");
     money_ins= money_ins-pb;
     revenue+=pb;
     button=66;
     nb--;
     test2=0;

   }
   if(product==2 && money_ins<pb){}

   if(product==3&& money_ins>=pc&& nc>0){
     printf("You have pressed button C.\n\n");
     money_ins= money_ins-pc;
     revenue+=pc;
     button=67;
     nc--;
     test2=0;

   }
   if(product==3 && money_ins<pc){}

   if(product==4&& money_ins>=pd&& nd>0){
     printf("You have pressed button D.\n\n");
     money_ins= money_ins-pd;
     revenue+=pd;
     button=68;
     nd--;
     test2=0;

   }
   if(product==4 && money_ins<pd){}

   if(product==5&& money_ins>=pe&& ne>0){
     printf("You have pressed button E.\n\n");
     money_ins= money_ins-pe;
     revenue+=pe;
     button=69;
     ne--;
     test2=0;

   }
   if(product==5 && money_ins<pe){}

   if (product==0){
     printf("Going back!\n\n");
     test2=0;
   }
   if(product>5 || product<0){
     printf("Invalid choice\n\n");
   }

 }

//end of choice 3
}

if(choice==4){
  returnmoney(money_ins);
  money_ins=0;
}

//service starts here
if(choice==9){
  servicemenu_access();
  int code;
  scanf("%d", &code);

  if(code!=1110){
    printf("Incorrect code!\n\n");
  }
  
  if(code==1110){
    printf("Correct code!\n");

    int test3=1, service;

    while(test3!=0){
      servicemenu();
      printf("Your choice:");
      scanf("%d", &service);

      if(service==1){
        service_inspect(revenue,money_ins, prodA, pa, na, prodB,pb, nb, prodC, pc, nc, prodD,pd,  nd, prodE,  pe,  ne);
      }

      if (service==2){
        withdrawmoney(revenue);
        revenue=0;
      }

      if (service==3){
        refill();
        printf("Your choice:");
        int refillnum;
        scanf("%d", &refillnum);

        if (refillnum==1){
        printf("You have refilled product A to full.\n");
        na=10;  

        }
        if (refillnum==2){
        printf("You have refilled product B to full.\n");
        nb=10;  

        }
        if (refillnum==3){
        printf("You have refilled product C to full.\n");
        nc=10;  

        }
        if (refillnum==4){
        printf("You have refilled product D to full.\n");
        nd=10;  

        }
        if (refillnum==5){
        printf("You have refilled product E to full.\n");
        ne=10;  

        }
        if(refillnum==0){
          printf("Going back!\n\n");

        }
        if(refillnum>5 || refillnum<0){
          printf("Invalid choice!\n\n");
        }
//end of service choice 3
      }

      if (service==4){
        changeproduct();
        printf("Your choice:");
        int change;
        scanf("%d",&change);

        if(change==1){
          printf("You are changing product A.\n\n");
          printf("Enter new product name:");
          scanf("%s",prodA);
          printf("Enter new product price:");
          scanf("%d", &pa);
          printf("The new product A has been filled to full.\n");
          na=10;
        }
        if(change==2){
          printf("You are changing product B.\n\n");
          printf("Enter new product name:");
          scanf("%s",prodB);
          printf("Enter new product price:");
          scanf("%d", &pb);
          printf("The new product B has been filled to full.\n");
          nb=10;
        }
        if(change==3){
          printf("You are changing product C\n\n");
          printf("Enter new product name:");
          scanf("%s",prodC);
          printf("Enter new product price:");
          scanf("%d", &pc);
          printf("The new product C has been filled to full.\n");
          nc=10;
        }
        if(change==4){
          printf("You are changing product D\n\n");
          printf("Enter new product name:");
          scanf("%s",prodD);
          printf("Enter new product price:");
          scanf("%d", &pd);
          printf("The new product D has been filled to full.\n");
          nd=10;
        }
        if(change==5){
          printf("You are changing product E\n\n");
          printf("Enter new product name:");
          scanf("%s",prodE);
          printf("Enter new product price:");
          scanf("%d", &pe);
          printf("The new product E has been filled to full.\n");
          ne=10;
        }
        if(change<0 || change>5){
          printf("Invalid choice!\n\n");
        }
        if(change==0){
          printf("Going back!\n\n");
        }
//end of service choice 4

      }

      if(service==0){
        printf("Going back!\n\n");
        test3=0;


      }
//end of coded menu while

    }
    //end of coded menu
  }
//end of choice 9

}

else if(choice==0){
  return 0;
}

}//end of while
return 0;
//int main void end next bracket
}
