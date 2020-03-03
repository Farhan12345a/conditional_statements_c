//Farhan Shahbaz

//Wayne



#include <stdio.h>



int main()
{

    char temp[10];

    puts("Please enter your temperature:");

    fgets(temp, sizeof(temp), stdin);

    printf("Temperature: %s\n", temp);

    
 //String to number

     
      char* rem;

      double dbl = strtod(temp, &rem);

      //printf("dbl value : %s\n",temp);

      printf("The number is %d\n", dbl);

    
   
      int sickness = fever(dbl);

      if(sickness == 1){

        printf("Your temperature is %s and you have a fever", temp);

      }else{

        printf("Your temperature is %s and you don't have a fever", temp);
    
}
    

return 0;


}



int fever(double &t){

    int a = (t > 98.6) ? 1 : 0;

    return a;
    

}