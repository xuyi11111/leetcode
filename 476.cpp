class Solution {
public:
	int findComplement(int num) {
		int temp = num, c = 0;
		while (temp>0) {
			temp >>= 1;//右移temp=temp>>1
			c = (c << 1) + 1;//c左移并且末尾加一
		}
		return num^c;//^ 异或, 即XOR, 所谓异或, 即该位值相同则取0, 如果该位值相异则取1
	}
};