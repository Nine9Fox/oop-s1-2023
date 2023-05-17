#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include<iostream>
#include<stack>
using namespace std;

class USBConnection{
private:
USBConnection(int id);

public:
~USBConnection();
int id;
static stack<int> ids;
static USBConnection* CreateUsbConnection();
int get_id();
};
#endif
