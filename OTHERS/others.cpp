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



// ===========================-========================================================================================================>
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


// REVERSE THE NUMBER ====================================================================================================================>
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