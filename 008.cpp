class Solution {
public:
	int change(string ans, int isfu) {//用于叠加数字计算
		int len = ans.length();
		if (len >= 12) {//数字溢出int
			ans = ans.substr(0, 12);
			len = 12;
		}
		long long ansnum = 0;//设置回答
		for (int i = 0; i<len; i++) {
			ansnum = ansnum * 10 + ans[i] - '0';//数字叠加
		}
		if (isfu == 2) {
			ansnum *= -1;//负号
		}
		if (ansnum>pow(2, 31) - 1) {
			return pow(2, 31) - 1;//返回最大值
		}
		if (ansnum<-pow(2, 31)) {
			return -pow(2, 31);//返回最小值
		}
		return ansnum;
	}
	int myAtoi(string str) {
		int len = str.length();//字符串长度
		bool isspace = true;//去掉空格
		int isfu = 0;//负号
		bool isnum = false;//是否出现数字
		bool iszero = true;//是否有0
		string ans;//答案
		for (int i = 0; i<len; i++) {
			if (isspace == true) {
				if (str[i] != ' ')isspace = false;//去空格
			}
			if (isspace == false) {

				switch (str[i]) {//空格去掉了，开始要字符
				case '+':
					if (isnum == true && ans == "") {//判断0
						return 0;
					}
					if (isfu == 0 && isnum == false)//出现符号且不在最后面
						isfu = 1;
					else
						if (isnum == true) {//符号在最后面直接计算
							return change(ans, isfu);
						}
						else
							return 0;
					break;
				case '-':
					if (isnum == true && ans == "") {//判断0
						return 0;
					}
					if (isfu == 0&&isnum==false)//出现符号且不在最后面
						isfu = 2;
					else
						if (isnum == true) {
							return change(ans, isfu);//符号在最后面直接计算
						}
						else
							return 0;
					break;
				case '0':
					if (iszero == false)
						ans += str[i];//去0
					isnum = true; break;
				case '1':ans += str[i]; iszero = false; isnum = true; break;//计算数字
				case '2':ans += str[i]; iszero = false; isnum = true; break;
				case '3':ans += str[i]; iszero = false; isnum = true; break;
				case '4':ans += str[i]; iszero = false; isnum = true; break;
				case '5':ans += str[i]; iszero = false; isnum = true; break;
				case '6':ans += str[i]; iszero = false; isnum = true; break;
				case '7':ans += str[i]; iszero = false; isnum = true; break;
				case '8':ans += str[i]; iszero = false; isnum = true; break;
				case '9':ans += str[i]; iszero = false; isnum = true; break;
				default:
					if (isnum == false) { return 0; }//没有数字直接为0
					else {
						return change(ans, isfu);//有数字返回计算数字
					}
				}
			}
		}
		return change(ans, isfu);//计算数字
	}
};