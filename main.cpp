#include <iostream>
using namespace std;
int main() {
  std::cout << "Hello World!\n";
  int siz;
  int numd[100];
  int nums[100];
  cin>>siz;
  int arr[siz];
  for(int timedd=0;timedd<100;timedd++){
    nums[timedd]=timedd;
    numd[timedd]=0;
  }
  for(int arrd=0;arrd<siz;arrd++){
    cin>>arr[arrd];
    
  }
  for(int timed=0;timed<siz;timed++){
    for(int tim=0;tim<100;tim++){
      if(arr[timed]==nums[tim]){
        numd[tim]=1;
      }
    }
  }
  
  for(int i=1;i<100;i++){
    if(numd[i]==0){
      cout<<nums[i];
      return 0;
    }
  
}
}