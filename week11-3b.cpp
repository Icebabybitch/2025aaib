#include <iostream>
using namespace std;
int max_digital(int n){
	int ans = 0;
	while (n>0){
		if (n%10 > ans) ans = n%10;
		n /= 10;
	}
	return ans;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digital(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
