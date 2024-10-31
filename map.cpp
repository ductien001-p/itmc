#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int a, b, c; 
	cin >> a >> b >> c;
	vector<string> v;
	int so = b;
		if(so % a==0)
		{
			string str1 = to_string(so);
			v.push_back(str1);
			string tmp1 = str1 + "b";
			string tmp2 = str1 + "c";
			int so1 = stoi(tmp1);
			int so2 = stoi(tmp2);
			if(so1 % a == 0)
			{
				v.push_back(tmp1);
				so = so1;
			}
			if(so2 % a == 0)
			{
				v.push_back(tmp2);
				so = so2;
			}
		}
		int num = c;
		if(num % a==0)
		{
			string str2 = to_string(num);
			v.push_back(str2);
			string tmp3 = str2 + "b";
			string tmp4 = str2 + "c";
			int num1 = stoi(tmp3);
			int num2 = stoi(tmp4);
			if(num1 % a == 0)
			{
				v.push_back(tmp3);
				num = num1;
			}
			if(num2 % a == 0)
			{
				v.push_back(tmp4);
				num = num2;
		}
	for(int i = 1; i <= v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}
