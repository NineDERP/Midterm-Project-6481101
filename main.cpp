#include <iostream>
using namespace std;

#include "pets.h"
#include "sorting.h"
#include <iomanip>

int main() {
  int n;
  cout << "Input number of snack types: ";
  cin >> n;
  int *pt_sa = new int[n];
  string *pt_sn = new string[n];
  int i, a;
  string na;
  for (i = 0; i < n; i++) {
    cout << "snack " << i + 1 << " name: ";
    cin >> pt_sn[i];
    cout << "amout: ";
    cin >> pt_sa[i];
  }
  bubbleSort(pt_sn, pt_sa, n);
  int N;
  cout << "How many pets do you want to have?: ";
  cin >> N;

  pets *pt_p = new pets[N];
  int g = 1, c, s = 0;

  while (g == 1) {
    system("clear");
    cout << "Feed your pets!!" << endl;
    cout << ">-----------------------------------------<" << endl;
    cout << "inventory: " << endl;
    for (i = 0; i < n; i++) {
      cout << "  " << i + 1 << "." << setw(10) << pt_sn[i] << setw(20)
           << pt_sa[i] << endl;
    }
    cout << ">-----------------------------------------<" << endl;
    cout << "Pets:" << endl;
    for (i = 0; i < N; i++) {
      cout << i + 1 << ". ";
      pt_p[i].print_name(); cout<<endl;
      switch(pt_p[i].get_hunger())
        {
          case 1: pt_p[i].print_name();  cout<<" is very hungry :<"<<endl; break;
          case 2: pt_p[i].print_name();  cout<<" needs more food >:D"<<endl; break;
          case 3: pt_p[i].print_name();  cout<<" is a bit peckish .~."<<endl; break;
          case 4: pt_p[i].print_name();  cout<<" is full :D"<<endl; break;
          case 5: pt_p[i].print_name();  cout<<" is bursting with food :O"<<endl; break;
          default: pt_p[i].print_name();  cout<<" is starving ;-;"<<endl; break; 
        }
    }
    cout << "actions" << endl;
    cout << "1.feed        2.quit" << endl;
    cout << "input[1,2]: ";
    cin >> c;
    if (c == 1) {

      while (s == 0) {
        cout << "choose a snack to give [input number]: ";
        cin >> c;
        if (pt_sa[c - 1] > 0) {
          pt_sa[c - 1]--;
          break;
        } else
          cout << "ran out of snack, please choose otherones" << endl;
        if (c == 0)
          break;
        cout << "input 0 to exit this screen" << endl;
      }
      while (c != 0) {
        cout << "choose who you give it to [input number]: ";
        cin >> c;
        if (pt_p[c - 1].get_hunger() < 5)
          ++pt_p[c - 1], pt_p[c - 1].print_name(),
              cout << " could use more food :D" << endl;
        else
          pt_p[c - 1].print_name(), cout << " is too full :C" << endl;
        bubbleSort(pt_sn, pt_sa, n);
        cout << "continue?" << endl;
        cout << "1.yes        2.no" << endl;
        cout << "input[1,2]: ";
        cin >> c;
        if (c != 1)
          g = 0;
        else
          break;
      }
    } else
      g = 0;
  }
  if (g == 0)
    cout << "Thanks for playing!! :D" << endl;
  delete[] pt_p;
  delete[] pt_sa;
  delete[] pt_sn;
}