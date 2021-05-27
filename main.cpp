#include <iostream>
using namespace std;
int main() {
  std::cout << "Hello World!\n";
  int n=0;
  cin>>n;
  int arr[n][n];
  int sarr[n][n];
  for(int t=0;t<n;t++){
    for(int st=0;st<n;st++){
      cin>>arr[t][st];
    }
  }
  for(int td=0;td<n;td++){
    for(int sto=0;sto<n;sto++){
      sarr[td][sto]=arr[sto][td];
    }
  }
  for(int timed=0;timed<n;timed++){
    for(int tim=0;tim<n;tim++){
      cout<<sarr[timed][tim]<<" ";
    }
    cout<<endl;
  }
}