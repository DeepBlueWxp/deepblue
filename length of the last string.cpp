//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;


//---------------·´Ïòµü´úÆ÷------------------

//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		if (!s.empty())
//		{
//			int len = 0;
//			auto rit = s.crbegin();
//			while (rit!=s.crend()&&*rit != ' ')
//			{
//				++len;
//				++rit;
//			}
//			//cout << "the length of the last string is ";
//			cout << len << endl;
//		}
//		else
//			cout << 0 << endl;
//	}
//	return 0;
//}


//----------------ÈÝÆ÷

//int main()
//{
//	string s, tmp;
//	vector<string> v;
//		while (cin >> s)
//			v.push_back(s);
//		if (!v.empty())
//		{
//			tmp = *(v.end() - 1);
//			cout << tmp.size() << endl;
//		}
//		else
//			cout << 0 << endl;
//	return 0;
//}