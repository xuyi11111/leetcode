class Solution {
public:
	string countAndSay(int n) {
		string str = "1";//初始赋值
		while (--n) {
			str = speak(str);//迭代
		}
		return str;
	}
	
	string int_to_string(int x) {
		string str = "0";
		str[0] = x + '0';//转换一个字符变成string
		return str;
	}
	
	string speak(string str) {
		int len = str.size();
		string str2 = "";//答案
		int count = 1;//初始计数
		for (int i = 1; i<len; i++) {
			if (str[i] == str[i - 1]) {
				count++;//有多个相同的数
			}
			else {
				str2 = str2 + int_to_string(count) + str[i-1];//字符不同，计数输出
				count = 1;
			}
		}
		str2 = str2 + int_to_string(count) + str[len - 1];//最后一个也要输出
		return str2;//返回字符串
	}


};