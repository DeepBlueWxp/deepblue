#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//  beautiful degree

//int main()
//{
//	int N;
//	//unsigned int sum = 0;
//	string s(26, 0), name;
//	vector<int> v;
//	cin >> N;
//	for (unsigned int i = 0; i != 26; ++i)
//		s[i] = 'a' + i;
//	for (int j = 0; j != N; ++j)
//	{
//		int sum = 0, tmp = 0;
//		cin >> name;
//		for (char& c : name)
//		{
//			c = tolower(c);
//			auto it = find(s.begin(), s.end(), c);
//			tmp = it - s.begin() + 1;
//			sum = sum + tmp;
//		}
//		v.push_back(sum);
//	}
//	for (int m : v)
//		cout << m << " " << endl;
//	//cout << s << endl;
//	return 0;
//}

// most beautiful name

//bool compare(int i, int j)
//{
//	return i > j;
//}
//
//void beautifulname(int N)
//{
//	string name, s;
//	vector<int>  result;
//	for (int i = 0; i != N; ++i)
//	{
//		int sum = 0, ref = 26, num = 0;
//		vector<int> v;
//		cin >> name;
//		for (char& c : name)
//			c = tolower(c);
//		s = name;
//		sort(s.begin(), s.end());
//		auto it = unique(s.begin(), s.end());
//		s.erase(it, s.end());
//		for (char c : s)
//		{
//			num = count(name.begin(), name.end(), c);
//			v.push_back(num);
//		}
//		sort(v.begin(), v.end(), compare);
//		for (int i : v)
//			sum = sum + i*(ref--);
//		result.push_back(sum);
//	}
//	for (int k : result)
//		cout << k << endl;
//}
//
//int main()
//{
//	int N ;
//	while (cin >> N)
//		beautifulname(N);
//	return 0;
//}

// reference

int main()
{
	void pretty_name();
	string str, name;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		pretty_name();
	return 0;
}

void pretty_name()
{
	string name;
	int num[26] = { 0 }, pretty = 0;
	cin >> name;
	for (char& c : name)
		c = tolower(c);
	for (unsigned int i = 0; i < name.length(); i++)
	{
		switch (name[i])
		{
		case 'a':num[0]++; break;
		case 'b':num[1]++; break;
		case 'c':num[2]++; break;
		case 'd':num[3]++; break;
		case 'e':num[4]++; break;
		case 'f':num[5]++; break;
		case 'g':num[6]++; break;
		case 'h':num[7]++; break;
		case 'i':num[8]++; break;
		case 'j':num[9]++; break;
		case 'k':num[10]++; break;
		case 'l':num[11]++; break;
		case 'm':num[12]++; break;
		case 'n':num[13]++; break;
		case 'o':num[14]++; break;
		case 'p':num[15]++; break;
		case 'q':num[16]++; break;
		case 'r':num[17]++; break;
		case 's':num[18]++; break;
		case 't':num[19]++; break;
		case 'u':num[20]++; break;
		case 'v':num[21]++; break;
		case 'w':num[22]++; break;
		case 'x':num[23]++; break;
		case 'y':num[24]++; break;
		case 'z':num[25]++; break;
		}
	}
	sort(num, num + 26);
	for (int i = 0; i<26; i++)
		pretty = pretty + (i + 1)*num[i];
	cout << pretty << endl;
}