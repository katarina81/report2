/* adv3 */

#include <iostream>
using namespace std;

void exchange(int &x, int &y){
  int r;

  r = x;
  x = y;
  y = r;
}

int main(void){
  int x = 0;
  int y = 0;
  cout << "整数値を入力して下さい:";
  cin >> x;
  cout << "整数値を入力して下さい:";
  cin >> y;
  cout << "変数xの値は" << x << ", 変数yの値は" << y << "です.\n";
  exchange(x, y);
  cout << "excange()を呼び出した後の変数xの値は" << x << ", 変数yの値は"<< y << "です.\n";
}
