 int main (){
    int num , digit ; 
    cout << "enter the number";
    cin>>num;
    while(num>0){
  digit = num%10;
  if(digit ==0){
    digit = 1;
  }else{
    digit = 1;
  }
  num= num/10;
    }
    cout<< digit;
 }