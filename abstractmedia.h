#ifndef ABSTRACTMEDIA_H
#define ABSTRACTMEDIA_H


#include<string>

namespace Media{

class AbstractMedia
{
private:
    unsigned int id2;
    std::string type;
    std::string name;
    unsigned int year;
    std::string author;

public:
    AbstractMedia(
        unsigned int id,
        std::string type,
        std::string name,
        unsigned int year,
        std::string author);


    virtual ~AbstractMedia() {};

    unsigned int getId() const;
    std::string getType() const;
    std::string getName() const;
    unsigned int getYear() const;
    std::string getAuthor() const;

};
}

#endif // ABSTRACTMEDIA_H
