#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <list>
#include <iostream>

class Video {
private:
    int mID;
    static unsigned int mIDCounter;
    std::string mTitle;
    std::string mGenre;
    std::string mProduction;
    int mNumberOfCopies;
    std::string mImageFilename;
    bool mAvailable;

public:
    Video(std::string title, std::string genre, std::string production, int numberOfCopies, std::string imageFilename);
    ~Video();

    int getVideoID();
    std::string getTitle();
    std::string getGenre();
    std::string getProduction();
    unsigned int getNumberOfCopies();
    std::string getImageFilename();
    bool isAvailable();
};

class VideoList {
private:
    std::list<Video> mVideoList;

public:
    VideoList();
    ~VideoList();

    Video searchVideo(int videoID);
    void newVideo(Video video);
};

#endif