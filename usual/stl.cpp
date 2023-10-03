#include<bits/stdc++.h>
int main(){
    //栈 a.top(); 
    std::stack<int> a;
    //队列
    std::queue<int> b;
    //动态数组 序列式容器
    std::vector<int> c;
    
    //优先队列
    std::priority_queue<int> d;
    //集合
    std::multiset<int> e1;//不去重
    std::set<int> e;
    /*
    插入 e.insert(5);
    删除 e.erase(5);
    迭代器遍历集合
    for(std::set<int>::iterator it=e.begin();it!=e.end();it++){
        printf("%d\n",*it);
    }
    for(auto it=e.begin();it!=e.end();it++){
        printf("%d\n",*it);
    }
    for(auto ss:s){
        printf("%d\n",ss);
    }
    查找中间元素
    e.find();(返回迭代器(地址),输出printf("%d\n",*find(5));)
    std::lower_bound();(标准二分查找)
    */
   //map(映射)
   std::map<std::string,int> cnt;
   std::string name;
   std::pair<int,int> p;//两个成员变量的结构体
   int n;
   for(int i=1;i<=n;i++){
        std::cin>>name;
        cnt[name]++;
   }//插入
   for(auto it=cnt.begin();it!=cnt.end();it++){
        std::cout<<it->first<<" "<<it->second;
   }//遍历1
   for(auto mm:cnt){
        std::cout<<mm.first<<" "<<mm.second;
   }//遍历2(按照key值从小到大排序(字典序))
}