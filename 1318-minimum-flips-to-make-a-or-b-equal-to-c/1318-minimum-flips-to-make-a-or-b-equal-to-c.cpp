class Solution {
public:
    int minFlips(int a, int b, int c) {
       int x,y,z,t=0;
        for(int i=0;i<32;i++){
            x=a&(1<<i);    //left shift operation to obtain single bit of the numbers
            y=b&(1<<i);
            z=c&(1<<i);
            if(z==0 && x!=0 && y==0) t++;
            else if(z==0 && x==0 && y!=0) t++;
            else if(z==0 && x!=0 && y!=0) t+=2;
            else if(z!=0 && x==0 && y==0) t++;
        }
        return t;
    }
};