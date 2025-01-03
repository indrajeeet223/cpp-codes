 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int minimumSum(int num) {
        int n=num;  // 4009
         int ones=n%10;  // reminder store hote aahai = 9
         n/=10;
         int tens=n%10; //0
        n/=10;
        int hund=n%10; // 0
        n/=10;
        int thou=n%10; //4
        n/=10;
        vector<int>v(4);
        v[0]=ones;
        v[1]=tens;
        v[2]=hund;
        v[3]=thou;
        sort(v.begin(),v.end());
        int new1=v[0];
        new1*=10;
        new1+=v[2];
        int new2=v[1];
        new2*=10;
        new2+=v[3];
        int result;
        result=new1+new2;
        return result;



    }
    int main()
    {
        int num=4009;
        cout<<minimumSum(num);
    }