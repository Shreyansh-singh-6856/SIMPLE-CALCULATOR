#include <stdio.h>


int main(){

    int input,store=0,times,values,num,num2=1;
    float num3,div;
    
    printf("WELCOME! TO A CALCULATOR  \nchoose what you want to do :  \n");
    printf( "1. ADDITION \n2. SUBTRACTION \n3. MULTIPLICATION \n4. DIVISION \n5. exit \n");
    scanf("%d",&input);

    if((input>5)||(input<1)){
        printf("\033[1;31m'ERROR' Enter Valid Input\033[0m" );           /*\033[1;31m is the escape code for red text. 
                                                                           \033[0m resets the color back to the default after printing the error message.  */
        return 1;
    };
    if (input==5)
    {
        printf("\033[1;32m Exit 'GOODBYE COME AGAIN' \033[0m");
       return 0;
    }
    
                                                                    //addition
    if(input==1){
        printf("Enter How many no. do you want to add : ");
        scanf("%d",&times);
        printf("Now enter values : \n");
    for (int i = 1; i <= times; i++)
    {
       scanf("%d",&values);
       store+=values;
    }
    printf("Your Total sum is : %d",store);
    }

                                                                   //subtraction
    if(input==2){
        printf("Enter How many no. do you want to subtract : ");
        scanf("%d",&times);
         printf("Enter the first number: ");
         scanf("%d", &num);
       printf("  Now enter the remaining numbers to subtract:\n ");
    for (int i = 1; i < times; i++)
    {
            scanf("%d",&values);
             num-=values;
       }
     printf("Your Total  is : %d",num);
    }

                                                                 //multiplication
 if(input==3){
        printf("Enter How many no. do you want to multiply  : ");
        scanf("%d",&times);
        printf("Now enter values : \n");
    for (int i = 1; i <= times; i++)
    {
       scanf("%d",&values);
       num2*=values;
    }
    printf("Your Total product is : %d",num2);
    }

                                                                    //division

     if(input==4){
        printf("Enter How many no. do you want to divide  : ");
        scanf("%d",&times);
         printf("Enter the dividend : ");
         scanf("%f", &num3);
       printf("Now enter the divisiors : \n");
     
    for (int i = 1; i < times; i++)
    {
       scanf("%f",&div);
       if (div==0)
       {
        printf("\033[1;31mNot Defined\033[0m");
        return 1;
       }
       
       num3/=div;
       
    }
    printf("Your quotient is : %.2f",num3);
    }                                                    

   
    return 0;

}