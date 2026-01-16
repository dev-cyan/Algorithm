#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	vector<char> out;
	stack<int> stk;
	int n;
	int cnt = 1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		while (cnt <= num)
		{
			stk.push(cnt);
			cnt++;
			out.push_back('+');
		}
		if (stk.top() == num)
		{
			stk.pop();
			out.push_back('-');
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}

	for (int i=0; i<out.size(); i++)
		cout << out[i] << '\n';
}