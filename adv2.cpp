/* adv1 */

/* inheritance.cpp */
#include <iostream>
#include <stdio.h>
using namespace std;

class person{
public:
  string name;
};

class ticket{
public:
  int id;
  person* user;
  ticket(){user = new person;}
};

class transTicket : public ticket {
public:
  string origin;
  string destination;
  transTicket(): ticket(){};
};

class hm{
public:
  int hour;
  int minute;
  inMinutes();
  hm(int timeInMinutes);

};

class trainTicket : public transTicket {
public:
  trainTicket(): transTicket(){};
  hm departureTime;
  hm arrivalTime;
};

hm::inMinutes(){
  for(int i = 0; i < ticketNum; i++){
    cout << tickets[i].arrivalTime.hour * 60 +  tickets[i].arrivalTime.minute = minute << "\n";
  }
}


int main()
{
  int ticketNum;
  int hour;
  int minute;
  cout << "チケットを何枚購入しますか? ";
  cin >> ticketNum;
  cout << "\n";
  trainTicket* tickets = new trainTicket [ticketNum];
  for(int i = 0; i < ticketNum; i++){
    tickets[i].id = i+1;
    cout << i+1 << "人目の利用者の名前を入力してください: ";
    cin >> tickets[i].user->name;
    cout << " 出発地を入力してください: ";
    cin >> tickets[i].origin;
    cout << " 到着地を入力してください: ";
    cin >> tickets[i].destination;
    cout << " 出発時間を入力してください: ";
    scanf("%d:%d", &hour, &minute);
    tickets[i].departureTime.hour = hour;
    tickets[i].departureTime.minute = minute;
    cout << " 到着時間を入力してください: ";
    scanf("%d:%d", &hour, &minute);
    tickets[i].arrivalTime.hour = hour;
    tickets[i].arrivalTime.minute = minute;
  }
  cout << "\n チケット利用者一覧:\n";
  for(int i = 0; i < ticketNum; i++){
    trainTicket t = tickets[i];
    cout << " " << t.id << " : " << t.user->name << " : " << t.origin << "(" << t.departureTime.hour << ":" << t.departureTime.minute << ") => " << t.destination << "(" << t.arrivalTime.hour << ":" << t.arrivalTime.minute << ")\n";
  }
  cout << "\n";
}
