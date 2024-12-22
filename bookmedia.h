#ifndef BOOKMEDIA_H
#define BOOKMEDIA_H

#include"AbstractMedia.h"
#include<string>

namespace Media{

class BookMedia : public AbstractMedia
{
private:
    unsigned int pages;
    std::string genre;
    std::string editor;

public:
    BookMedia(
        unsigned int id,
        std::string type,
        std::string name,
        unsigned int year,
        std::string author,
        unsigned int pages,
        std::string genre,
        std::string editor);
    unsigned int getPages() const;
    std::string getGenre() const;
    std::string getEditor() const;

};


}

#endif // BOOKMEDIA_H
