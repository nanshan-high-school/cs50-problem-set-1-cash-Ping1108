#include <iostream>
using namespace std;

int main() {
    float money = 0;
    int total = 0;

    cout << "請輸入金額:";
    cin >> money;

    while ( money > 0) {
        if ( money >= 1000) {
            cout << "一張1000元\n"; 
            money = money - 1000;
        } else if ( money >= 100 ) {
            cout << "一張100元\n"; 
            money = money - 100;
        } else if ( money >= 10 ) {
            cout << "一個10元\n"; 
            money = money - 10;
        } else if ( money >= 1 ) {
            cout << "一個1元\n"; 
            money = money - 1;
        } 
    total = total + 1;
    }
    cout  << "要帶" <<  total << "張錢";
}
// 27018林育平
