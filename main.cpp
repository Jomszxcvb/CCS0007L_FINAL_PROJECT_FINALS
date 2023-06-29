#include <iostream>
#include "includes/video.h"
#include "includes/customer.h"

class VideoRentalSystem {
protected:
    VideoList mVideoList;
    CustomerList mCustomerList;

public:
    VideoRentalSystem();
    ~VideoRentalSystem();


    void newVideoMenu(Video video);
    void rentVideoMenu(int videoID);
    void returnVideoMenu(int videoID);
    void showVideoDetailsMenu(int videoID);
    void displayAllVideosMenu();
    void checkVideoAvailabilityMenu(int videoID);
    void customerMaintenanceMenu();
};

int main() {
    VideoRentalSystem videoRentalSystem;

    
    return 0;
}

VideoRentalSystem::VideoRentalSystem() {
    std::cout << "Welcome to the Video Rental System!" << std::endl;
    std::cout << "Please select an option:" << std::endl;
    std::cout << "[1] New Video" << std::endl;
    std::cout << "[2] Rent a Video" << std::endl;
    std::cout << "[3] Return a Video" << std::endl;
    std::cout << "[4] Show Video Details" << std::endl;
    std::cout << "[5] Display All Videos" << std::endl;
    std::cout << "[6] Check Video Availability" << std::endl;
    std::cout << "[7] Customer Maintenance" << std::endl;
    std::cout << "[8] Exit Program" << std::endl;

    int option;

    std::cin >> option;

    switch (option)
    {
    case 1:
        //TODO: Implement newVideoMenu
        break;
    case 2:
        //TODO: Implement rentVideoMenu
        break;
    case 3:
        //TODO: Implement returnVideoMenu
        break;
    case 4:
        //TODO: Implement showVideoDetailsMenu
        break;
    case 5:
        //TODO: Implement displayAllVideosMenu
        break;
    case 6:
        //TODO: Implement checkVideoAvailabilityMenu
        break;
    case 7:
        //TODO: Implement customerMaintenanceMenu
        break;
    case 8:
        //TODO: Implement exitProgram
        break;
    default:
        std::cout << "Invalid option. Please try again." << std::endl;
        break;
    }
}

void VideoRentalSystem::newVideoMenu(Video video) {
    //TODO: Implement newVideoMenu
    //PROGRAMMER 1
}

void VideoRentalSystem::rentVideoMenu(int videoID) {
    //TODO: Implement rentVideoMenu
    //LEAD PROGRAMMER
    if (mVideoList.searchVideo(videoID).isAvailable()) {
        mCustomerList.getCustomer().rentVideo(videoID);
    }
    else {
        std::cout << "Video is not available." << std::endl;
    }

}

void returnVideoMenu(int videoID) {
    //TODO: Implement returnVideoMenu
    ///LEAD PROGRAMMER
}

void showVideoDetailsMenu(int videoID) {
    //TODO: Implement showVideoDetailsMenu
    //PROGRAMMER 2
}

void displayAllVideosMenu() {
    //TODO: Implement displayAllVideosMenu  
    //PROGRAMMER 1
}

void checkVideoAvailabilityMenu(int videoID) {
    //TODO: Implement checkVideoAvailabilityMenu
    //PROGRAMMER 2
}

void customerMaintenanceMenu() {
    //TODO: Implement customerMaintenanceMenu
    //PROGRAMMER 1
}
