/*2352219 陈应波 信11*/ 

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << "请输入[1-100亿）之间的数字:" << endl;
    double a;
    cin >> a;
    
    int g, s, b, q, w, sw, bw, qw, y, sy, jiao,fen;
    sy = int(a / 1000000000);
    y = int(a / 100000000 - sy * 10);
    qw = int(a / 10000000 - sy * 100 - y * 10);
    bw = int(a / 1000000 - sy * 1000 - y * 100 - qw * 10);
    sw = int(a / 100000 - sy * 10000 - y * 1000 - qw * 100 - bw * 10);
    w = int(a / 10000 - sy * 100000 - y * 10000 - qw * 1000 - bw * 100 - sw * 10);
    double x = (a - sy * 1000000000.0 - y * 100000000.0 - qw * 10000000.0 - bw * 1000000.0 - sw * 100000 - w * 10000) * 100;
   
    q = int(x / 100000);
    b = int(x / 10000 - q * 10);
    s = int(x / 1000 - q * 100 - b * 10);
    g = int(x / 100 - q * 1000 - b * 100 - s * 10);
    jiao = int(x / 10 - q * 10000 - b * 1000 - s * 100 - g * 10+0.1);
    fen = int(x - q * 100000 - b * 10000 - s * 1000 - g * 100 - jiao * 10+0.1);
    
    cout << "十亿位 : " << sy << endl;
    cout << "亿位   : " << y << endl;
    cout << "千万位 : " << qw << endl;
    cout << "百万位 : " << bw << endl;
    cout << "十万位 : " << sw << endl;
    cout << "万位   : " << w << endl;
    cout << "千位   : " << q << endl;
    cout << "百位   : " << b << endl;
    cout << "十位   : " << s << endl;
    cout << "圆     : " << g << endl;
    cout << "角     : " << jiao << endl;
    cout << "分     : " << fen << endl;
    
    return 0;
}

