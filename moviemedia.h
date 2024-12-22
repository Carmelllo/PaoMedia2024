#ifndef MOVIEMEDIA_H
#define MOVIEMEDIA_H

#include<vector>
#include"AbstractMedia.h"


namespace Media{

class MovieMedia : public Media::AbstractMedia
{

private:
    double durata;
    std::vector<std::string> cast;
    std::string studio;

public:
    MovieMedia(
        unsigned int id,
        std::string type,
        std::string name,
        unsigned int year,
        std::string author,
        double durata,
        std::vector<std::string> cast,
        std::string studio);

    double getDurata() const;
    std::vector<std::string> getCast() const;
    std::string getStudio() const;

};
}
#endif // MOVIEMEDIA_H
