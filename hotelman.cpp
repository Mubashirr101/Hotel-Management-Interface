#include <iostream>

using namespace std;

int main()
{
  int i = 1;
  int pass, adminpass = 12345;
  int choice, max = 100, cust_no = 0;
  int rmno;
  char name[30], adr[50], phone[10], email[30];
  int yes_no;

  cout << "\t***************** ";
  cout << "WELCOME TO HOTEL";
  cout << " ***************** " << endl;
  cout << "\t HELLO ADMIN!!" << endl;
  cout << "\t Please enter the password: ";
  cin >> pass;

  if (pass == adminpass)
  {
    system("cls");
    cout << "\t***************** ";
    cout << "WELCOME TO HOTEL";
    cout << " ***************** " << endl;
    cout << "\t MAIN MENU " << endl;
    cout << "\t 1) Book a room " << endl;
    cout << "\t 2) Room Records " << endl;
    cout << "\t 3) Customer Records " << endl;
    cout << "\t 4) All Records " << endl;
    cout << "\t Choose a service: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
      system("cls");
      if (cust_no < max)
      {
        cout << "**Enter Customer Details:" << endl;
        cout << "Rooms           \t Price/day" << endl;
        cout << "Economy Room(1-50)  \t 500/day" << endl;
        cout << "Business Room(51-75)  \t 1000/day" << endl;
        cout << "Luxury Room(76-95)  \t 2000/day" << endl;
        cout << "Royal Room(96-99)  \t 5000/day" << endl;
        cout << "Penthouse (100)  \t 10000/day" << endl;
      correct:
        cout << "*****************************" << endl;
        cout << "Room No.           \t: ";
        cin >> rmno;
        cout << "Name of customer     \t: ";
        cin >> name;
        cout << "Address            \t: ";
        cin >> adr;
        cout << "Phone Number        \t: ";
        cin >> phone;
        cout << "Email ID            \t: ";
        cin >> email;
        cout << "Are you sure the details entered are CORRECT? \nIf yes press 1 else press 2" << endl;
        cin >> yes_no;

        if (yes_no == 1)
        {
          cout << "**********DETAILS*********\n";
          cout << "Name of customer     \t: " << name << endl;
          cout << "Room No.             \t: " << rmno << endl;
          cout << "Address             \t: " << adr << endl;
          cout << "Phone Number         \t: " << phone << endl;
          cout << "Email ID             \t: " << email << endl;
        }
        else
        {
          cout << "**Enter the details correctly!!**";
          goto correct;
        }
      }
      else
      {
        cout << "**SORRY NO VACANT ROOMS!!**";
      }
      break;
    case 2:
      cout << " **SORRY service not available :( **\n **Software Under development**" << endl;
      break;

    case 3:
      cout << " **SORRY service not available :( **\n **Software Under development**" << endl;
      break;

    case 4:
      cout << " **SORRY service not available :( **\n **Software Under development**" << endl;
      break;

    default:
      cout << "**Invalid Input**";
      break;
    }
  }
  else
  {
    cout << "**SORRY INVALID PASSWORD!!**";
  }
  return 0;
}