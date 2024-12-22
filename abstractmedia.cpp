#include "abstractmedia.h"

Media::AbstractMedia::AbstractMedia(
        unsigned int i,
        std::string t,
        std::string n ,
        unsigned int y,
        std::string a)
    : id(i), type(t), name(n), year(y), author(a) {}

unsigned int Media::AbstractMedia::getId() const{
    return id;
}
std::string Media::AbstractMedia::getType() const{
    return type;
}
std::string Media::AbstractMedia::getName() const{
    return name;
}
unsigned int Media::AbstractMedia::getYear() const{
    return year;
}
std::string Media::AbstractMedia::getAuthor() const{
    return author;
}

