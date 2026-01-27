#include<bits/stdc++.h>
using namespace std;
struct stu{
    int chinese,math,english;
    int id;
    int total;
};
const int MAXN=1e5+5;
stu s[MAXN];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i].chinese>>s[i].math>>s[i].english;
        s[i].total=s[i].chinese+s[i].math+s[i].english;
        s[i].id=i;
    }
    sort(s+1,s+1+n);//需要添加一个自定义排序
}