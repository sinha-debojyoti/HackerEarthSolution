#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	while(T--)
	{
		string str1, str2;
		cin >> str1 >> str2;

		int i = 0;
		for(int j = 0; j < str2.size(); j++)
		{
			if(str1[i] == str2[j])
			{
				i++;
			}
		}

		if(i == str1.size())
		{
			cout << "Love you too\n";
		}
		else
		{
			cout << "We are only friends\n";
		}
	}

	return 0;
}
