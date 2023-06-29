#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <queue>
#include <list>
#include <iostream>

#include "video.h"

class CustomerBase {
protected:
    int mID;
    static unsigned int mIDCounter;
    std::string mName;
    std::string mAddress;

public:
    CustomerBase(std::string name, std::string address);
    ~CustomerBase();

    int getCustomerID();
    std::string getName();
    std::string getAddress();
};

class Customer : public CustomerBase {
private:
    std::list<int> mRentedVideos;

public:
    Customer(std::string name, std::string address);
    ~Customer();

    void rentVideo(int videoID);
    void returnVideo(int videoID);
};

class CustomerList {
private:
    std::queue<Customer> mCustomers;

public:
    CustomerList();
    ~CustomerList();

    Customer getCustomer();
    
    void addCustomer(Customer customer);
    void removeCustomer();
};

#endif