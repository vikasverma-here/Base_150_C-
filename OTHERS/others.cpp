// WAP for table 
#include <iostream> 
using namespace std; 

// WAP for table printting 


// int main(){
//     int n,i;
//     cout<<"enter a number ";
//     cin>>n;
//     for(i=1; i<=10 ; i++){
//        cout<< n<<" *"<< i << " " << " = " << n*i <<endl;
//     }
// }


// WAP for Prime number 

//  { number ya fir 1 se divide ho ya khudse our dono number alag hona chaiye isliye sabe cota prime number 1 na hokar 2 hota }
// int main(){
//     int num ;
//     cout<<"enter the number ";
//     cin>>num;
//     if (num<2){
//         cout<<"Not Prime ";
//         return 0;
//     }
   
    
//    for(int i = 2 ; i<num ; i++){
//     if(num%i==0){
//         cout<<"not prime ";
//         return 0;
        
//     }
//      else if(num==2){
//       cout <<"number is prime";
//       return 0;
//     }
    
//    }
// cout<<"prime number ";
// return 0;
// }


// WAP that take a input and return the the fibonacci series 

// int main(){
//     int num , first , second , current  ;
//     cout <<" enter the number ";
//     cin>>num;
//     first=0;
//     second = 1;
//    if (num == 1){
//     cout << "0";
//     return 0;
//    }
//    if (num == 2){
//     cout << "1";
//     return 0;
//    }
//     for(int i = 3; i<=num; i++){

//          current=first+second;
//         first = second;
//         second = current;
//     }
//  cout << current;
// }

// pattern one 1  ================================================================================>

// 1 1 1 1 1 
// 1 1 1 1 1
// 1 1 1 1 1 
// 1 1 1 1 1 
// 1 1 1 1 1 

// int main (){
//     int row , col ;
//     for (row = 1 ; row <=5; row++){
//         for(col=1;col<=5; col++){
//             cout<<" 1 " ;
           
//         }

//         cout<<endl;
//     }
//     return 0;
// }

// QUESTION TWO  =================================================================================================>
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// int main (){
//     int row , col ;
//     for (row = 1 ; row<=5 ; row++){
//         for (col=1 ; col<=5; col++){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }

// QUESTION THREE ===============================================================================================================>
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// int main (){
//     int row , col ;
//     for(row =1 ; row <=5 ; row ++){
//         for(col=5; col>=1; col--){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// QUESTION FOURTH =====================================================================================================>
// 1 2 3 4 5 
// 6 7 8 9 10
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 

// int main (){
//     int row , col , count =1;
//     for(row=1; row <=5 ; row++){
//         for(col=1 ; col<=5; col++){
//             cout << count << " ";
//             count= count+1 ; 
//         }
//         cout<< endl;
//     }
// }

// QUESTIOJN FIFTH ==============================================================================================>
// *
// * *
// * * * 
// * * * *
// * * * * * *

// int main (){
//     int row , col;
//     for (row =1 ; row <=5 ; row++){
//         for(col=1; col<=row ; col++){
//          cout<<" * ";
//         }
//         cout<<endl;
//     }
// }


// QUESTTION SIX ==========================================================================================>
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4
// 1 2 3 4 5
// int main (){
//     int row , col;
//     for (row =1; row <= 5 ; row++){
//         for (col=1;col<=row; col++){
//             cout<<col<<" ";
//         }

//         cout<<endl;
//     }
// }

// QUESTION 7 ==================================================================================================>
// a a a a a a 
// b b b b b b 
// c c c c c c
// d d d d d d 
// e e e e e e 
// int main (){
//     int row , col ;
//     for ( row =1 ; row<=5 ; row++){
//         char c = 'a';
//         for ( col=1; col<=5; col++){
//             cout<<'c'+row-1 << " ";
//         }
//         cout<<endl;
//     }
// }



// QUESTION 8 =============================================================================================================>
// a
// a b 
// a b c 
// a b c d 
// a b c d e
// int main (){
//     int row , col ;
//     for ( row =1 ; row<=5 ; row++){
//         char c = 'a';
//         for ( col=1; col<=row; col++){
//             cout<<'c'+col-1 << " ";
//         }
//         cout<<endl;
//     }
// }    


// QUESTION NUMBER 9==============================================================================================================>  
    //       *
    //     * * *
    //   * * * * *
    // * * * * * * *  
        
       // 1-FIRST LOOP FOR ROWS ROW<=NUMBER OF ROWS 
       // 2-SECOND LOOP FOR SPACE PRINTING COL<=TOTAL NUMBER OF ROWS - ROW NUMBER 
      // 3-THIRD LOOP FOR STAR PRINTING  (COL<=2*ROW NUMBER -1)
 

    //  int main (){
    //     int row , col , total_rows;
    //     cout << " Enter a Number of rows ";
    //     cin>> total_rows;
        
    //     for (row=1; row<=total_rows; row++){
    //         SPACE
    //         for(col=1; col<=total_rows-row; col++){
    //             cout<<" ";
    //         }
    //         STAR 
    //         for(col=1; col<=2*row-1; col++){
    //             cout<<"*";
    //         }
    //         cout <<endl;
    //     }
    //  }

    // QUESTION 9 =============================================================================================================================>
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
//     1- FIRST TOTAL_ROWS TAKE INPUT  
//     2- PRINT SPACE COL<=TOTAL_ROWS - ROW ;  
//     3-PRINT STAR ROW TIMES OF STAR      

//  int main(){
//      int row , col , total_row;
//     cout<<"Enter total rows ";
//     cin>>total_row;
//     ======>PRINTING ROW 
//     for(row=1;row<=total_row;row++){
//       ======>PRINTING SSPACE
//         for(col=1; col<=total_row-row; col++){
//          cout<<" ";
//         }
//         ======>PRINTING STAR
//         for(col=1; col<=row;col++){
//             cout<<"* ";
//         }
//         ========>NEW LINE 
//         cout<<endl;
//     }
//  }  




// QUESTION 10===================================================================================================================================>
// *                 *
// * *             * * 
// * * *         * * * 
// * * * *   * * * * *
// * * * * * * * * * * 
// ---------------------------------> FIRST WE WRIGHT CODE  FOR UPPER  PORTTION 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 
// !!!!!!!!!CODE FOR UPER PORTION----->
// int main (){
//     int row , col,num,i;
//     cout<<"enter the number of rows";
//     cin>>num;
//     for(row=1; row<=num; row++ ){
//         for(col=1; col<=row; col++){
//             cout<<"*";
//         }
//     for(col=1; col<=2*(num-row); col++){
//         cout<<" ";
//     }
//      for(col=1; col<=row; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//   !!!!!!!!!!!!!!!botttom part ---------->
// for(row=1; row<=num-1; row++){
//     for(col=1;col<=num-row;col++){
//         cout<<"*";
//     }
//     for(col=1;col<=2*row;col++){
//         cout<<" ";
//     }
//      for(col=1;col<=num-row;col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }

//!!!! ===========================-========================================================================================================>
// Count digit of given number ------------->
// how divide works 
// int main (){
//   int num=100,digit=129;

//  int  divide = 129/10;

//   cout<<divide;

// }
// !!!!!!!!!!!!!!!! acoutal code is here ----->
    // int main (){
    //   int num,n=10,digit=1;
    //   cout<<"enter the number ";
    //   cin>>num;
    //   for(int i =1; i>0;i++){
    //     if(num/n==0){
    //       cout<<digit;
    //       return 0;
    //     }
    //     n=n*10;
    //     digit++;

    //   }
    // }

// !!!!!!!!!!!!!!!!!!!!!USING WHILE LOOP -->
// int main (){
//   int num, n=10,digit=0,i;
//   cout<<"enter the number" ;
//   cin>>num;
//   while(num){
//     digit++;
//     num =num/n;
//   }
//   cout<<digit;
// }


// !!!! REVERSE THE NUMBER ====================================================================================================================>
// int main (){
//   int num ,digit, sum=0;
//   cin>>num;
//   while(num){
//     digit = num%10;
//     sum = sum*10+digit;
//     num = num/10;
//   }
//     cout <<sum;
// }

// !!!!COUNT DIGIT OF GIVEN NUMBER ==========================================================> 


// int main (){
//     int num , n=10, digit =1,i;
//     cout<<"enter number for count digit";
//     cin>>num;
//     for (i=1;i>0;i++){
//         if(num/n==0){
//             cout<<digit;
//             return 0;
//         }
//         n= n*10;
//         digit++;
//     }
// }

// !!!!!!!!!!! COUNT DIGIT USING WHILE ------------->
// int main(){
//     int num, n=10 , digit=0;
//     cout <<"enter number";
//     cin>>num;
//     while (num)
//     {
//      digit++;
//      num = num/n;
//     }
//     cout<<digit;
    
// }

// !!!!!  REVERSE THE NUMBER ==============================================> 
// int main (){
//     int number , sum = 0 , n=10;
//     cout<<"enter thhe number ";
//     cin>>number;
//     while (number)
//     {
//         int digit  = number%n;
//         sum = sum*10+digit ; 
//         number = number/n;
      
//     }
//     cout<<sum;

// }

// !!!!!!!! PATTERN QUESTION ------------->
// *********
//   *******
//    ******
//     *****
//      ****
//       ***
//        **
//         *

// int main (){
//     int row , col  , num;
//     cout<<"enter the number ";
//     cin>>num;
//     for(row=1;row<=num; row++){
//         for (col=1;col<=row-1;col++){
//             cout<<" ";
//         }
//         for(col=num ; col>=row;col--){
//             cout<<"*";
//         }

//         cout<<endl;
//     }
// }

// !!!!! PATTERN QUESTION ------------->
// **********
//  ********
//   ******
//    ****
//     ** 
//      *


// !!!!!!!!!!!!!!DECIMAL TO BINARY CONVERSION -=====================================>
// int main(){
//     int num,digit,multiply=1,sum=0;
//     cout<<"enter the number  ";
//     cin>>num;
//     while (num>0){
//         digit = num%2; 
//         sum=sum+digit*multiply;
//         num = num/2;
//         multiply= multiply*10;

//     }
// cout<<sum;
    
// }


// !!!!!!!!!!BINARY TO DECIMAL  code not working properly but working litle bit ok ============> 

//  int main (){
//     int num , digit ; 
//     cout << "enter the number";
//     cin>>num;
//     while(num>0){
//   digit = num%10;
//   if(digit==0){
//     digit ==1;
//     cout<<digit;
//   }else{
    
//     cout<<digit;
//   }
//  num=num/10;
//     }
    
//  }




// !!!!!!!!!!!FUNCTION AND ARRAY =========================================================================>  


// !!!!sum of two number using function --->

// void add (int a, int b){
//     cout<<a+b;
//     return ;
// }

//  int main(){
//     int num1,num2;
//     cout<<"enter the num1  number ";
//     cin>>num1;
//     cout<<"enter the num2  number ";
//     cin>>num2;
//     add(num1,num2);
//    return 0;
//  }

// !!!!!!even or odd using using function -------->
// void evenodd(int number){
//     if(number%2==0){
//         cout<<number<<"this number is even ";
        
//     }else{
//         cout<<number<<"this number is odd ";
//     }
//     return;
// }

// int main (){
//     int num ;
//     cout<<"enter the number the to check number is even or odd";
//     cin>>num;
//     evenodd(num);
// }

// !!!!!!! printing table using function ------>
//  void table(int number){
//     for(int i =1; i<=10; i++){
//         cout<<number<<"*"<<i<<"="<<number*i<<endl;
//     }
//  return ;
//  }

// int main (){
//     int num ;
//     cout <<"enter the number for table ";
//     cin>>num;
//     table(num);
// return 0;
// }

// !!!!factorial of a number using function ---------->
// void fact(int number){
//     int fact =1;
//     for(int i = 1; i<=number; i++){
//         fact = fact*i;
      
//     }
//       cout<<"the of this "<<number<<"is "<<fact;
//       return ;
//  }
// int main (){

// int num;
// cout<<"enter the number for the factorial ";
// cin>>num;
// fact(num);
// }

// !!!!!!!!!!!!! FUNCTION OVERLOADING ------------------->
// *jab ek nam ke do ek jyada function ho our parameter ke hisab se kam kare use hi hum function overloading bolte hai --------?
// int add(int a, int b){
//     return a+b;

// }
// int add(int a, int b, int c ){
//     return a+b-c;

// }
// int main (){
//     cout<<add(46,3) <<endl;
//     cout<<add(46,3,5);
// }

//! QUESTION !!!!!! ARRAY  ARR[8]={-3,7,11,-2,8,170,0,11} FIND THE MINIMUM ELEMENT ----?
// int main (){
//     int arr[8]={-23,7,11,-5,8,170,0,11};
//     int min_val = arr[0];
//     for(int i=1; i<=7;i++){
//         if(arr[i]< min_val){
//             min_val = arr[i];
//         }
//     }

//     cout<<min_val;
// }


// !!! QUESTON PRINT ODD NUMBER IN USING ARRA----->?

// int main (){
//     int arr[10]={3,24,32,4,45,3,4,3,4,-11,};
//     for (int i=0; i<=9; i++){
//         if(arr[i]%2 != 0 || arr[i]%2==-1){
//             cout<<arr[i] <<endl;
//         }
//     }
// }                       

// !!! QUESTION PRINT EVEN NUMBER ------>?

// int main(){
//     int i;
//     int arr[9]={2,102,3,12,10,2,3,21,};
//     for( i = 0;i<9;i++){
//         if(arr[i]%2==0){
//             cout<<"number is even "<<arr[i] << endl ;
//         }
//     }
// }


// !!! QUESTION NUMBER IS PRIME OR NOT USING ARRAY and FUNCTION 

// void prrime(int num ){
// if(num<2)
// return;

// for(int i=2; i<=num-1;i++){
//     if(num%i==0)
//     return;
// }
// cout<<num<<" ";
// }

// int main (){
//     int arr[5]={2,23,343,20,334}; 
//     for (int i =0;i<5; i++)
//     prrime(arr[i]);
// }

// !!!! reverse an arrey by one element 

// int main (){
//     int arr[6]={3,4,12,32,2,34};
//     int size = 6;
//     int lastElement  = arr[size-1];
//    cout<<lastElement;
//    for(int i=size-1; i>0; i--){
//     arr[i]=arr[i-1];
//    }
//    arr[0]=lastElement;
//    cout << "arrey after reversing by one element ";
//    for (int i=0; i<=size ; i++){
//     cout<<arr[i]<<" ";
//    }
//    return 0;
// }

// !! ARRRAY PATTERRN QUESTION LIKE THI --- ==================================================================>?


// int arr[5]= [1,2,3,4,5]

// print => 1 2 3 4 5
//          1 2 3 4
//          1 2 3 
//          1 2 
//          1 

// int main (){
//     int arr[6]={1,2,3,4,5,6};
//     for ( int i=0; i<6; i++){
//         for (int j =0 ; j<(6-i); j++){
//             cout<<arr[j] <<" ";
//         }
//         cout<<endl;
//     }
// }

// !!!! question    int arr[5]={2,3,4,5,6};=======================================================>  
// 2 3 4 5 6
// 3 4 5 6
// 4 5 6
// 5 6
// 6
// int main (){

//     int i,j;
//     int arr[5]={2,3,4,5,6};  
//     for(i=0;i<5;i++){
//         for(j=i; j<5;j++){
// cout<<arr[j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//  !!! int arr[5]={2,3,4,5,6};  ====================================================>
// 6 5 4 3 2 
// 6 5 4 3 2
// 6 5 4 3 2
// 6 5 4 3 2
// 6 5 4 3 2
// int main(){
//         int arr[5]={2,3,4,5,6};  
//         for(int i=0; i<5; i++){
//             for(int j=4;j>=0; j--){
//                 cout<<arr[j] <<" ";

//             }
//             cout<<endl;
//         }
// }

// !!int arr[5]={2,3,4,5,6}; =======================================================>
//  int main(){
//         int arr[5]={2,3,4,5,6};  
//         for(int i=0; i<5; i++){
//             for(int j=4-i;j>=0; j--){
//                 cout<<arr[j] <<" ";

//             }
//             cout<<endl;
//         }
// }
// 6 5 4 3 2 
// 5 4 3 2
// 4 3 2
// 3 2
// 2

//  !!! int arr[5]={2,3,4,5,6};  ===================================================
// int main(){
//      int arr[5]={2,3,4,5,6};  
//      for (int i=0; i<5;i++){
//         for(int j=4; j>=i;j--){
//             cout<<arr[j]<<" ";
//         }
//         cout<<endl;
//      }
// }
// 6 5 4 3 2 
// 6 5 4 3
// 6 5 4
// 6 5
// 6