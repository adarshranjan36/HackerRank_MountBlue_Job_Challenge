
int squares(int a, int b) {
  int count=0;
  int num1=ceil(sqrt(a));
  int num2=floor(sqrt(b));
  if(num1<=num2){
    count=num2-num1+1;
  }
  return count;
}
