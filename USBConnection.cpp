#include"USBConnection.h"

stack<int> USBConnection::ids({3, 2, 1});

USBConnection::USBConnection(int id)
{
    this->id=id;
}

USBConnection* USBConnection::CreateUsbConnection() {
    if (!ids.empty()) {
        int id = ids.top();
        ids.pop();
        USBConnection* a=new USBConnection(id);
        return a;
    }
    return nullptr;
}

int USBConnection::get_id(){
    return id;
} 
USBConnection::~USBConnection() 
{
    ids.push(id);
}
