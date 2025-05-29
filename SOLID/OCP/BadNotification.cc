#include <iostream>

using namespace std;

class Notification
{
public:
    void sendNotification(const string &type)
    {
        if (type == "SMS")
        {
            sendSMS();
        }
        else if (type == "Email")
        {
            sendEmail();
        }
        else if (type == "Push")
        {
            sendPush();
        }
        else
        {
            cout << "Unknown notification type" << endl;
        }
    }

private:
    void sendSMS()
    {
        cout << "Sending SMS notification" << endl;
    }

    void sendEmail()
    {
        cout << "Sending Email notification" << endl;
    }

    void sendPush()
    {
        cout << "Sending Push notification" << endl;
    }
};