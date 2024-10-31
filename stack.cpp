#include <bits/stdc++.h>
#include <stack>
using namespace std;	
//Kiem tra dau ngoac
void ngoac()
{
	string s; cin >> s;
	stack<char> st;
	for(auto x : s)
	{
		if(x == '(')
		{
			st.push(x);
		}
		else 
		{
			if(st.empty())
			{
				return;
			}
			else
			{
				st.pop();
			}
		}
	}
// So lon nhat be phai 3 4 2 5  2 6 2 cout << 4 5 5 6 -1
//	if(st.empty())	cout << "Valid" << endl;
//	else cout << "Not valid" << endl;
//}
//	
//	int n; cin >> n;
//	int a[n], b[n];
//	stack<int> st;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for(int i = 0; i < n; i++)
//	{
//		if(st.empty())
//		{
//			st.push(i);
//		}
//		else
//		{
//			while(!st.empty() && a[st.top()] < a[i])
//			{
//				b[st.top()] = a[i];
//				st.pop();
//			}
//			st.push(i);
//		}
//	}
//	while(!st.empty())
//	{
//		b[st.top()] = -1;
//		st.pop();
//	}
//	for(int x : b)
//	{
//		cout << x << " ";
//	}
int main()
{
	
	return 0;
}
