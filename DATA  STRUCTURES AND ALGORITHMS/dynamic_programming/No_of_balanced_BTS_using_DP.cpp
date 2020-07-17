#include <iostream>
#include <cmath>
using namespace std;
int binaryTreesOfHeightH(int h){
	int* arr=new int[h+1];
	if(h==0){
		return 1;
		
	}
	if(h==1){
		return 1;
	}
	arr[0]=1;
	arr[1]=1;
	int mod=(int) (pow(10,9))+7;
	for(int i=2;i<=h;i++){
		int temp1=(int)(((long)(arr[i-1])*arr[i-1])%mod);
		int temp2=(int)((2*(long)(arr[i-1])*arr[i-2])%mod);
		int ans=(temp1+temp2)%mod;
		arr[i]=ans;
	}
	return arr[h];
}
int main() {
    int h;
    cin >> h;
    int ans = binaryTreesOfHeightH(h);
    ans = ans % ((int)(pow(10, 9)) + 7);
    cout << ans << endl;
}

