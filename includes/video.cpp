#include "video.h"

unsigned int Video::mIDCounter = 0;

Video::Video(std::string title, std::string genre, std::string production, int numberOfCopies, std::string imageFilename) {
    mID = mIDCounter;

    mIDCounter = mID;
    ++mID;
    mTitle = title;
    mGenre = genre;
    mProduction = production;
    mNumberOfCopies = numberOfCopies;
    mImageFilename = imageFilename;
    if (mNumberOfCopies > 0) {
        mAvailable = true;
    } else {
        mAvailable = false;
    }
}

int Video::getVideoID() {
    return mID;
}

std::string Video::getTitle() {
    return mTitle;
}

std::string Video::getGenre() {
    return mGenre;
}

std::string Video::getProduction() {
    return mProduction;
}

unsigned int Video::getNumberOfCopies() {
    return mNumberOfCopies;
}

std::string Video::getImageFilename() {
    return mImageFilename;
}

bool Video::isAvailable() {
    return mAvailable;
}

Video VideoList::searchVideo(int videoID) {
    for (auto video : mVideoList) {
        if (video.getVideoID() == videoID) {
            return video;
        }
    }
}

void VideoList::newVideo(Video video) {
    mVideoList.push_back(video);
}