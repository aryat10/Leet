class Solution {
public:
    string intToRoman(int num) {
        string ns="";
        while(num>=1000){
            ns=ns+"M";
            num = num-1000;
        }
        if(num>=900){
            ns=ns+"CM";
            num = num-900;
        }
        while(num>=500){
            ns=ns+"D";
            num = num-500;
        }
         if(num>=400){
            ns=ns+"CD";
            num = num-400;
        }
        while(num>=100){
            ns=ns+"C";
            num = num-100;
        }
        if(num>=90){
            ns=ns+"XC";
            num = num-90;
        }
        while(num>=50){
            ns=ns+"L";
            num = num-50;
        }
         if(num>=40){
            ns=ns+"XL";
            num = num-40;
        }
        while(num>=10){
            ns=ns+"X";
            num = num-10;
        }
         if(num==9){
            ns=ns+"IX";
            num = num-9;
        }
        while(num>=5){
            ns=ns+"V";
            num = num-5;
        }
        if(num==4){
            ns=ns+"IV";
            num = num-4;
        }
        while(num>=1){
            ns=ns+"I";
            num = num-1;
        }
        return ns;
    }
};