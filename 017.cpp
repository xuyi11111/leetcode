
class Solution {
public:
	vector<string> letterCombinations(string digits) {
		string ans[10] = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };//保存映射数字
		queue<string> str;//用队列来循环
		int len = digits.size();//数字长度
		int bef = 0, last = 0;//对一个数字里面的字母循环
		string temp_for_char = "0";//用于char转string的小方法；
		for (int i = 0; i<len; i++) {//循环输入
			int len2 = ans[digits[i] - '0'].size();//得到号码的长度
			if (i == 0) {
				for (int j = 0; j<len2; j++) {//由于初始时str中没有字符串，故独立插入
					temp_for_char[0] = ans[digits[0] - '0'][j];//字符char变成了string
					str.push(temp_for_char);//把string放入队列中
					last++;//增加长度
				}
			}
			else {
				int last_temp = last;//用于队列循环是否到了尾巴
				while (bef<last_temp) {
					string temp = str.front();//得到队列头
					str.pop();//弹出队列头
					bef++;//前指针++
					for (int j = 0; j<len2; j++) {
						temp_for_char[0] = ans[digits[i] - '0'][j];//转字符串
						str.push(temp + ans[digits[i] - '0'][j]);//将输出的字符串加上末尾最新字符再插入队列
						last++;//得到最新队尾
					}
				}
			}
		}
		vector<string> ans2;
		while(!str.empty()) {
			string temp = str.front();//队列变变长数组
			str.pop();
			ans2.push_back(temp);

		}
		return ans2;//返回
	}
};