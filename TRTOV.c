#include <stdio.h>


int main(void){


    // program 2.13 Unsuitable Type
    // const float revenue_per_150 = 4.5f;
    // short janSold = 23500;
    // short febSold = 19300;
    // short marSold = 21600;
    // float revquarter = 0.0f;

    // short QuarterSold = janSold+febSold+marSold;
    // printf("stock sold in:\nSold Jan: %hd\nSold Feb: %hd\nSold Mar: %hd\n",janSold,febSold,marSold);
    // printf("Total sold In one Month : %hd\n",QuarterSold);

    // revquarter = QuarterSold/(150*revenue_per_150);
    // printf("Sales Revenue this quarter: %.2f\n",revquarter);
    
    // program 2.14 Suitable type
    //  const float Revenue_per_150 = 4.5f;
    //  unsigned short Jansold = 23500;
    //  unsigned short Febsold = 19300;
    //  unsigned short Marsold = 21600;
    //  float Revquarter = 0.0f;

    //  unsigned long quartersold = Jansold+Febsold+Marsold;
    //  printf("stock sold in:\nSold Jan: %hu\nSold Feb: %hu\nSold Mar: %hu\n",janSold,febSold,marSold);
    //  printf("Total sold In one Month : %ld\n",quartersold);
     
    //  Revquarter = (float)quartersold/150*Revenue_per_150;
    //  printf("Sales Revenue this quarter: $%.2f\n",Revquarter);
     
    //  int number = 0;
    //  float value = 2.33f;
    //  number = value;
    //  printf("this result is eliminate: %d\n",number);

        double price = 10.0;
        long count = 5L;
        float ship_cost = 2.5F;
        int discount = 15;
        // long double total_cost = (price*count + ship_cost)*((100L - discount)/100.0F);
        // printf("Total Cost : %Lf\n",total_cost);

        printf("price*count: %lf\n",(price*count)+ship_cost);

    return 0;
}