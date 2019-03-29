#include <iostream>
using namespace std;
int main() {
	int s1, s2, m1, m2, h1, h2, x1,x2,ans;
	cout << "請輸入小時";
	cin >> h1;
cout << "請輸入分鐘";
	cin >> m1;
cout << "請輸入秒";
	cin >> s1;
cout << "請輸入小時";
	cin >> h2;
cout << "請輸入分鐘";
	cin >> m2;
cout << "請輸入秒";
	cin >> s2;
	x1 = 3600 * h1+(m1*60)+s1;
    x2 = 3600 * h2+(m2*60)+s2;
ans = x1 - x2;
	cout <<"相差"<< abs(ans)<<"秒";
	
	system("pause");
	return 0;

}