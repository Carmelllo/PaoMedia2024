#ifndef ARTICLEMEDIA_H
#define ARTICLEMEDIA_H

#include"AbstractMedia.h"
#include<string>

namespace Media{

class ArticleMedia : public AbstractMedia
{
private:
    std::string issue;
    std::string journal;
    std::string volume;

public:
    ArticleMedia(
        unsigned int id,
        std::string type,
        std::string name,
        unsigned int year,
        std::string author,
        std::string issue,
        std::string journal,
        std::string volume
        );
    std::string getIssue() const;
    std::string getJournal() const;
    std::string getVolume() const;
};
}

#endif // ARTICLEMEDIA_H
