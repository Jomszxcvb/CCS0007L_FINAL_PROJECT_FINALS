#include "customer.h"

unsigned int CustomerBase::mIDCounter = 0;

CustomerBase::CustomerBase(std::string name, std::string address) {
    mID = mIDCounter;

    mIDCounter = mID;
    ++mID;
    mName = name;
    mAddress = address;
}

void Customer::rentVideo(int videoID) {
    mRentedVideos.push_back(videoID);
}

void Customer::returnVideo(int videoID) {
    mRentedVideos.remove(videoID);
}

void CustomerList::addCustomer(Customer customer) {
    mCustomers.push(customer);
}

void CustomerList::removeCustomer() {
    mCustomers.pop();
}

Customer CustomerList::getCustomer() {
    return mCustomers.front();
}

