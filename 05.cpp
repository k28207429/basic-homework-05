#include <iostream>
using namespace std;
int main() {
	int s1, s2, m1, m2, h1, h2, x1,x2,ans;
	cout << "�п�J�p��";
	cin >> h1;
cout << "�п�J����";
	cin >> m1;
cout << "�п�J��";
	cin >> s1;
cout << "�п�J�p��";
	cin >> h2;
cout << "�п�J����";
	cin >> m2;
cout << "�п�J��";
	cin >> s2;
	x1 = 3600 * h1+(m1*60)+s1;
    x2 = 3600 * h2+(m2*60)+s2;
ans = x1 - x2;
	cout <<"�ۮt"<< abs(ans)<<"��";
	
	system("pause");
	return 0;

}