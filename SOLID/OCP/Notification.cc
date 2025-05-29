#include <iostream>

using namespace std;

class Notification
{
public:
    virtual void notify() = 0;
    virtual ~Notification() {}
};

class SMSNotification : public Notification
{
public:
    void notify() override
    {
        cout << "SMS Notification" << endl;
    }
};

class EmailNotification : public Notification
{
public:
    void notify() override
    {
        cout << "Email Notification" << endl;
    }
};

class PushNotification : public Notification
{
public:
    void notify() override
    {
        cout << "Push Notification" << endl;
    }
};

class NotificationSender
{
public:
    void sendNotification(vector<Notification *> notifications)
    {
        for (Notification *notification : notifications)
        {
            notification->notify();
        }
    }
};

int main()
{
    NotificationSender sender;

    vector<Notification *> notifs;
    notifs.push_back(new SMSNotification());
    notifs.push_back(new PushNotification());
    notifs.push_back(new EmailNotification());

    sender.sendNotification(notifs);
}