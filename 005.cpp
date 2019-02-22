class Solution {
public:
	string longestPalindrome(string s) {
		int max = 1;//自身就是最大的值
		string temp;//返回的最大回文子串
		temp = s.substr(0, 1);//拷贝函数用于拷贝，string为这个，char string为strncpy
		int len = s.length();//获得字符长度
		for (int i = 0; i<len; i++) {//循环，从最低找到最高
        	for (int j = 0; i+j<len&&i-j>=0; j++) {//j为i的右边，且它是左右对称的基数倍，j必须小于长度，且左边的要大于0
				if (s[i+j] != s[i-j]) {//若发现不是对称的了
					if (max <= j * 2 - 1) {//若对称的数量更少
						temp = s.substr(i - j+1, j * 2 - 1);//进行拷贝
						max = j * 2 - 1;//更新最大值
					}
					break;
				}
				if (i + j == len-1 || i - j == 0) {//到达边界
					if (s[i + j] == s[i - j]) {//并保持要求
						if (max <= j * 2 + 1) {//若对称的数量更少
							temp = s.substr(i - j, j * 2 + 1);//进行拷贝
							max = j * 2 + 1;//更新最大值
						}
						break;
					}
				}
			}
			for (int j = 0; i + j+1<len&&i - j >= 0; j++) {//偶数对称
				if (s[i + j+1] != s[i - j]) {//若发现不是对称的了
					if (max <= j* 2 ) {//若对称的数量更少
						temp = s.substr(i - j+1, j * 2 );//进行拷贝
						max = j * 2 ;//更新最大值
					}
					break;
				}
				if (i + j+1 == len-1 || i - j == 0) {//到达边界
					if (s[i + j + 1] == s[i - j]) {//保持要求
						if (max <= j * 2+2) {//若对称的数量更少
							temp = s.substr(i - j, j * 2 + 2);//进行拷贝
							max = j * 2+2;//更新最大值
						}
						break;
					}
				}
			}

		}
		return temp;
	}
};