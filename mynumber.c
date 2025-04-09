#include <stdio.h>
bool istrue(int num){
 if(num==1) return false;
 else if(num==2) return true;
 else{
  for(int i=2;i<=num-1;i++){
   if(num%i==0)return false;
   }
  return true;
 }
}


int main(){
 for(int i=1;i<=100;i++){
  if(i%2==1) printf("%d\n",i);
 }
 for(int i=1;i<=100;i++){
  if(i%2==0) printf("%d\n",i);
 }
 for(int i=1;i<=100;i++){
  if(istrue(i)) printf("%d\n",i);
 }
}
