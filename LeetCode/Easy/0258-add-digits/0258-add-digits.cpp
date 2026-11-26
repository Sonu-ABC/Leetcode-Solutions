class Solution {
public:
    int addDigits(int num) {
        while(true){
            int temp=0;
            while(num>0){
               int r=num%10;
               temp+=r;
               num/=10;
            }
            num=temp;
            if(num<10) break;
        }
        return num;
    }
};