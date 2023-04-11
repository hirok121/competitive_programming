#include<stdio.h>
#include<math.h>

 double genaratelastnum(int counter);


int main(){

    int counter=0;
    double input;
    printf("input a number that sum of number's digit(less than equal 45)  : ");
    scanf("%f",&input);

    if (input<=45)
    {
        int substract=9;
      while (input>=substract && input!=0)
      {
       
        input-=substract;
        substract--;
        counter++;
      }

    //   input=input+ substract+1;
    //   counter--;

     printf("input %f\n counter %d\n lastmun1 %f\n",input,counter,genaratelastnum(counter));

       if ( input!=0.0)
    {    
       input= input*pow(10.0,(double)counter) + genaratelastnum(counter) ; 
    }else{
        input= genaratelastnum(counter);
    }
    
     printf("Your Minimum number is %f",input);
     printf("\n thank you!!!!");

    }else{
        printf("Number should be less than 45\n thank you!!!!");
    }

   

    return 0;
}

double genaratelastnum(int counter){


     double lastnum1=9, lastnum=8;

     if (counter==0)
     {
        lastnum1=0;
     }
     


     for (int i = 1; i < counter; i++)
     {
        lastnum1=lastnum1+ lastnum * pow(10,i);

        lastnum--;
     }

     return lastnum1 ;
     

    // switch (counter)
    // {
    // case 1 :
    // lastnum=9;
    //     break;
    //  case 2 :
    // lastnum=89;
    //     break;

    //  case 3 :
    // lastnum=789;
    //     break;
    //  case 4 :
    // lastnum=6789;
    //     break;

    //  case 5 :
    // lastnum=56789;
    //     break;
      
    //      case 6 :
    // lastnum=456789;
    //     break;
    //      case 7 :
    // lastnum=3456789;
    //     break;
    //      case 8 :
    // lastnum=23456789;
    //     break;
    //      case 9 :
    // lastnum=123456789;
    //     break;
        
        
    // default:
    //     break;
    // }


}