#include <iostream>
using namespace std;
int main() {
  std::cout << "Hello World!\n";
  int suc=1;
  char arr[5];
  cin>>arr;
  int sta=0;
  int en=0,nu=0;
  for(int t=0;t<100;t++){
    if(arr[t]=='/0'){
      en=t;
      break;
    }
  }
  for(int ti=0;ti<sta-en;ti++){
    if(arr[sta]==arr[en]){
      sta++;
      en--;
    }else{
      cout<<"nope";
      suc=0;
      break;
    }
  }
 if(suc==1){
   cout<<"yes";
 }
}