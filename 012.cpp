class Solution {
public:
    string intToRoman(int num) {
        string str[13]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        string ends="";
        while(num>=1000){
            num-=1000;
            ends+=str[12];
        }
        while(num>=900){
            num-=900;
            ends+=str[11];
        }
        while(num>=500){
            num-=500;
            ends+=str[10];
        }
        while(num>=400){
            num-=400;
            ends+=str[9];
        }
        while(num>=100){
            num-=100;
            ends+=str[8];
        }
        while(num>=90){
            num-=90;
            ends+=str[7];
        }
        while(num>=50){
            num-=50;
            ends+=str[6];
        }
        while(num>=40){
            num-=40;
            ends+=str[5];
        }
        while(num>=10){
            num-=10;
            ends+=str[4];
        }
        while(num>=9){
            num-=9;
            ends+=str[3];
        }
        while(num>=5){
            num-=5;
            ends+=str[2];
        }
        while(num>=4){
            num-=4;
            ends+=str[1];
        }
        while(num>=1){
            num-=1;
            ends+=str[0];
        }
    return ends;
    }
};