#include<bits/stdc++.h>
using namespace std;
struct stu{
    int chinese,math,english;
    int id;
    int total;
};
const int MAXN=1e5+5;
bool cmp(stu a,stu b){
    if(a.total==b.total){
        if(a.chinese==b.chinese){
            return a.id<b.id;
        }
        return a.chinese>b.chinese;
    }
    return a.total>b.total;//想让大的在前return a>b;想让小的在前return a<b;
}
stu s[MAXN];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i].chinese>>s[i].math>>s[i].english;
        s[i].total=s[i].chinese+s[i].math+s[i].english;
        s[i].id=i;
    }
    sort(s+1,s+1+n,cmp);//需要添加一个自定义排序compare,没有定义排序规则编译器不知道如何比较这两个对象
    for(int i=1;i<=5;i++){
        cout<<s[i].id<<' '<<s[i].total<<endl;
    }
}