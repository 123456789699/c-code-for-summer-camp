# map用法  
## 1.map定义  
1.1 map<type1,type2> mp  
## 2.map元素访问  
2.1 下标访问  
map<char, int> mp;   
mp['c'] = 20;  
cout << mp['c'];	  
## 3.常用函数  
3.1 count()  (O(logN))  
a.count(键)返回对应的键是否存在  
3.2 insert((key,value)) (O(logN))  

# 附加  
## vector的初始化  
vector<int> b(2,-1)  
2表示元素个数，-1表示初始值