#include <iostream>

using namespace std;

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    } else {
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}
int main(){
  int n, i, j = 0;
  cout << "batas deret : ";
  cin >> n;
  cout << "deret fibonacci : \n";
  for (i = 1; i <= n; i++){
    cout << "f_"<< i << ":";
    cout << fibonacci(j) <<endl;
    j++;
  }
  return 0;
}
