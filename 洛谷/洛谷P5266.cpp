#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> a;
    int Q;
    cin >> Q;
    
    while(Q--){
        int op;
        cin >> op;
        
        if(op == 1) {  // 插入或修改
            string name;
            int score;
            cin >> name >> score;
            a[name] = score;  
            cout << "OK" << endl;
        }
        else if(op == 2) {  // 查询
            string name;
            cin >> name;
            if(a.count(name) > 0) {  // 注意：>0 而不是 >=0
                cout << a[name] << endl;
            }
            else {
                cout << "Not found" << endl;
            }
        }
        else if(op == 3) {  // 删除
            string name;
            cin >> name;
            if(a.count(name) > 0) {
                a.erase(name);
                cout << "Deleted successfully" << endl;
            }
            else {
                cout << "Not found" << endl;
            }
        }
        else if(op == 4) {  // 汇总
            cout << a.size() << endl;
        }
    }
    
    return 0;
}
